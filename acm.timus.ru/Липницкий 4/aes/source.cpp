#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cassert>

using namespace std;

typedef long long ll;
typedef double db;
typedef long double ldb;
typedef string str;

#define forn(i, n) for(int i = 0; i < n; ++i)
#define INF 1e+9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define X first
#define Y second
#define ms(x) memset(x, 0, sizeof(x))
#define ms1(x) memset(x, -1, sizeof(x))
#define sz(x) ( (int) x.size() )
#define len(x) ( (int) x.length() )
#define ALL(x) x.begin(), x.end()
#define pii pair<int, int>
#define pdd pair<double, double>

int parseChar(char ch){
	int ans = ch - '0';
	if (ans >= 0 && ans <= 9) return ans;
	return ch - 'a' + 10;
}

int readHex(){
	string s;
	cin >> s;
	int ans = 0;
	ans = parseChar(s[0]) * 16 + parseChar(s[1]);
	return ans;
}

int gethigh(int a){
	for(int i=30; i>=0; i--) if (a & (1 << i)) return i;
	return -1;
}

int mul(int a, int b){
	int rez = 0;
	for(int i=0; i<30; i++){
		if (a & (1 << i)){
			rez ^= b << i;
		}
	}
	return rez;
}

int rez(int a, int b){
	if (a == b) return 0;
	if (gethigh(b) > gethigh(a)) return a;
	return rez(a ^ (b << (gethigh(a) - gethigh(b))), b);
}

const int mod = 283;
const int maxn = 100000;
int rev[maxn];

struct eque{
	int x;

	eque(int x){
		this->x = x;
	}

	eque(){ this->x = 0;}

	eque operator + (eque a) const {
		//return eque(x + a.x);
		return eque(x ^ a.x);
	}

	eque operator * (eque a) const {
		//return eque(x * a.x);
		int r = mul(x, a.x);
		r = rez(r, mod);
		return eque(r);
	}
};

eque getrev(eque a){
	if (a.x == 0) return a.x;
	int to = (1 << 8) - 1;
	for(int i=1; i<to; i++){
		eque cur(i);
		if ((a * cur).x == 1) return cur;
	}
	assert(true);
	assert(false);
}

vector<vector<eque> > InvSubBytesTable;
vector<vector<eque> > InvMixMatrix;
vector<vector<eque> > text;
vector<eque> result;

vector<vector<eque>> mulmatr(vector<vector<eque> > &a, vector<vector<eque> > &b){
	vector<vector<eque> > ans(sz(a), vector<eque>(sz(b[0])));
	forn(i, sz(ans)) forn(j, sz(b[i])){
		eque cur(0);
		forn(r, sz(a[i])){
			cur = cur + a[i][r] * b[r][j];
		}
		ans[i][j] = cur;
	}
	return ans;
}

void shiftrow(vector<eque> &a, int r){
	vector<eque> buf = a;
	for(int i=0; i<sz(a); i++){
		int to = (i + r + sz(a)) % sz(a);
		a[to] = buf[i];
	}
}

void shiftrows(vector<vector<eque> > &a, int mul = 1){
	for(int i=0; i<sz(a); i++) 
		shiftrow(a[i], mul * i);
}

void show(vector<vector<eque> > &a){
	forn(i, sz(a)) {
		forn(j, sz(a[i])){
			printf("%d ", a[i][j].x);
		}
		printf("\n");
	}
}

vector<vector<eque> > make_vector(int n, int m){
	return vector<vector<eque> > (n, vector<eque>(m));
}

vector<vector<eque> > scan(int n, int m){
	vector<vector<eque> > ans = make_vector(n, m);
	forn(i, n) forn(j, m) cin >> ans[i][j].x;
	return ans;
}

vector<vector<eque> > scanHex(int n, int m){
	vector<vector<eque> > ans = make_vector(n, m);
	forn(j, m) forn(i, n) ans[i][j].x = readHex();
	return ans;
}

pii split(int a){
	//cout << hex << a << "\n";
	int mask = 15;
	int s = a & ((1 << 4) - 1);
	int f = a & ((1 << 8) - 1);
	f ^= s;
	f >>= 4;
	//cout << hex << f << s << "\n";
	return mp(f, s);
}

void InvSubBytesBox(vector<vector<eque> > &a){
	forn(i, sz(a)) forn(j, sz(a[i])){
		pii cur = split(a[i][j].x);
		a[i][j].x = InvSubBytesTable[cur.X][cur.Y].x;
	}
	/*forn(i, sz(a)) forn(j, sz(a[i])){
		a[i][j] = getrev(a[i][j]);
	}*/
}

void SubBytesBox(vector<vector<eque> > &a){
	forn(i, sz(a)) forn(j, sz(a[i])){
		a[i][j] = getrev(a[i][j]);
	}
	forn(i, sz(a)) forn(j, sz(a[i])){
		pii cur = split(a[i][j].x);
		a[i][j].x = InvSubBytesTable[cur.X][cur.Y].x;
	}
}

void InvMixColumns(vector<vector<eque> > &a){
	vector<vector<eque> > buffer = a;
	for(int j=0; j<sz(a[0]); j++){
		vector<vector<eque> > cnt = make_vector(4, 1);
		for(int i=0; i<sz(a); i++){
			cnt[i][0] = buffer[i][j];
		}
		cnt = mulmatr(InvMixMatrix, cnt);
		for(int i=0; i<sz(a); i++){
			a[i][j] = cnt[i][0];
		}
	}
}

char table[] = {' ', 'à', 'á', 'â', 'ã', 'ä', 'å', '¸', 'æ', 'ç', 'è', 'é', 'ê', 'ë', 'ì', 'í', 'î', 'ï', 'ð', 'ñ', 'ò', 'ó', 'ô', 'õ', 'ö', '÷', 'ø', 'ù', 'ú', 'û', 'ü', 'ý', 'þ', 'ÿ'};
vector<eque> keys;

int getnum(char ch){
	for(int i=0; i<34; i++){
		if (ch == table[i]) return i;
	}
	assert(true);
	assert(false);
}

char getchar(int index){
	index = abs(index);
	if (index > 34){
		//assert(false);
		//assert(true);
	}
	return table[index];
}

eque reverseByte(eque a){
	eque answer(0);
	for(int i=0; i < 8 ; i++){
		answer.x <<= 1;
		answer.x += (a.x & (1 << i)) ? 1 : 0;
	}
	return answer;
}

void readkey(vector<eque> &a){
	for(int i=0; i<16; i++) a[i].x = readHex();
}

void shh(){
	for(int i=0; i<4; i++) {
		forn(j, 4) cout << hex << text[i][j].x << " ";
		cout << "\n";
	}
	cout << "\n";
}
void decrypt(){
	int cnt = 0;
	//readkey(keys);
	shh();
	InvMixColumns(text);
	shh();
	shiftrows(text);
	shh();
	InvSubBytesBox(text);
	shh();
	cnt = 0;
	forn(j, sz(text)) forn(i, sz(text)) text[i][j] = text[i][j] + keys[cnt++];
	shh();
	//forn(i, sz(text)) forn(j, sz(text[i])) text[i][j] = reverseByte(text[i][j]);
	cnt = 0;
	result.resize(sz(keys));
	forn(j, sz(text)) forn(i, sz(text)) {
		if (text[i][j].x < 16) cout << "0";
		cout << text[i][j].x;
		result[cnt++] = text[i][j].x;
	}
	cout << "\n";
}

void sh(){
	show(text);
	printf("\n");
}

void Encrypt(string t){
	int cnt = 0;
	forn(i, 4) forn(j, 4){
		text[i][j] = getnum(t[cnt++]);
	}
	sh();
	forn(i, sz(text)) forn(j, sz(text[i])) text[i][j] = reverseByte(text[i][j]);
	sh();
	SubBytesBox(text);
	sh();
	shiftrows(text, -1);
	sh();
	InvMixColumns(text);
	sh();
	cnt = 0;
	forn(i, sz(text)) forn(j, sz(text[i])) text[i][j] = text[i][j] + keys[cnt++];
	sh();
	forn(i, sz(text)) {
		forn(j, sz(text[i])) cout << hex << text[i][j].x << " ";
		cout << endl;
	}
}

void d(){
	InvSubBytesTable = scan(16, 16);
	InvMixMatrix = scan(4, 4);
	text = scanHex(4, 4);
	string s;
	cin >> s;
	keys.resize(sz(s));
	forn(i, sz(keys)) keys[i].x = getnum(s[i]);
	decrypt();
	forn(i, sz(result)) cout << getchar(result[i].x);
	cout << "\n";
}

void e(){
	InvSubBytesTable = scanHex(16, 16);
	InvMixMatrix = scanHex(4, 4);
	text = make_vector(4, 4);
	string s;
	cin >> s;
	keys.resize(sz(s));
	forn(i, sz(keys)) keys[i].x = getnum(s[i]);
	string text;
	cin >> text;
	Encrypt(text);
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin);
	/*freopen("output.txt", "w", stdout);*/
#endif;
	/*vector<vector<eque> > a, b;
	a = scanHex(4, 4);
	b = scanHex(4, 1);
	a = mulmatr(a, b);
	for(int i=0; i<4; i++) cout << hex << a[i][0].x << "\n";
	return 0;*/
	/*eque aa(2);
	eque bb(135);
	aa = aa * bb;
	cout << aa.x << "\n";
	return 0;
	int n = 4;
	vector<vector<eque> > a, b;
	a = scanHex(n, n);
	b = scanHex(n, 1);
	a = mulmatr(a, b);
	show(a);
	return 0;*/
	//e();
	d();
	/*eque a(20), b(10);
	a = a * b;
	cout << a.x;*/
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
