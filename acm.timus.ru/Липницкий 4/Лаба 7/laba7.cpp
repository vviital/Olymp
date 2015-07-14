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

int countlog(int val){
	int ans = 0;
	forn(i, 32){
		if (val & (1 << val)) ans = i;
	}
	return ans;
}

vector<int> ans;

int calcF(int val){
	int cnt = 0;
	for(int i=30; i>=1; i--){
		if (i & 1){
			cnt ^= 1;
		}
	}
	return cnt;
}

void myprint(int x, bool fl = true){
	if (x == 0){
		printf("0");
		return;
	}
	vector<int> cc;
	for(int i=30; i >= 0; i--){
		if (x & (1 << i)) cc.pb(i);
	}
	forn(i, sz(cc) - 1){
		printf("x^%d + ", cc[i]);
	}
	if (cc.back() == 0){
		printf("1");
	} else {
		printf("x^%d", cc.back());
	}
	if (fl)
	printf("\n");
}

int gethigh(int a){
	for(int i=30; i>=0; i--) if (a & (1 << i)) return i;
	return -1;
}

const int maxn = 1 << 28;
int high[maxn];

inline bool divide(int a, int b){
	if (a == b) return true;
	if (high[b] > high[a]) return false;
	return divide(a ^ (b << (high[a] - high[b])), b);
}

void count(int n){
	int to = 1 << (n + 1);
	forn(i, maxn) high[i] = gethigh(i);
	ans.pb(2);
	int cc = to / 100;
	int dd = 0;
	for(int i=3; i < to; i++){
		if (i % cc == 0) {
			cerr << i << "\n";
		}
		if ((i & 1) == 0) continue;
		if (calcF(i) == 0) continue;
		bool ok = false;
		int pred = high[i] / 2; 
		forn(j, sz(ans)){
			if (high[ans[j]] > pred) break;
			ok = divide(i, ans[j]);
			if (ok) break;
		}
		if (!ok) ans.pb(i);
	}
	forn(i, sz(ans)){
		myprint(ans[i]);
	}
}

void make_table_plus(int n){
	int mask = 1 << (n + 1);
	printf("+\t");
	forn(x, mask) {
		myprint(x, false);
		printf("\t");
	}
	printf("\n");
	forn(x, mask) {
		myprint(x, false);
		printf("\t");
		forn(y, mask){
			int cur = x ^ y;
			myprint(cur, false);
			printf("\t");
		}
		printf("\n");
	}
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
	if (high[b] > high[a]) return a;
	return rez(a ^ (b << (high[a] - high[b])), b);
}

void make_table_mul(int n, int eque){
	int cc = 1000;
	forn(i, cc) high[i] = gethigh(i);
	printf("*\t");
	int mask = 1 << (n + 1);
	forn(x, mask) {
		myprint(x, false);
		printf("\t");
	}
	vector<pair<pii, int> > pairs;
	printf("\n");
	forn(x, mask) {
		myprint(x, false);
		printf("\t");
		forn(y, mask){
			int cur = mul(x, y);
			if (high[cur] >= high[eque])
				cur = rez(cur, eque);
			myprint(cur, false);
			if (x <= y && cur == 1) pairs.pb(mp(mp(x, y), cur));
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
	forn(iter, sz(pairs)){
		myprint(pairs[iter].X.X, false);
		printf("\t");
		myprint(pairs[iter].X.Y, false);
		//printf("\t = \t");
		printf("\t");
		myprint(pairs[iter].Y);
	}
}

void calc(int n, int mask){
	int cc = 1000;
	forn(i, cc) high[i] = gethigh(i);
	int ccc = 1;
	for(int i=1; i<=63; i++){
		printf("%d\t", i);
		ccc = mul(ccc, 2);
		ccc = rez(ccc, mask);
		myprint(ccc);
	}
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, mask;
	cin >> n >> mask;
	calc(n, mask);
	//make_table_mul(n,mask); 
	//make_table_plus(5);
	//count(20);
#ifndef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
