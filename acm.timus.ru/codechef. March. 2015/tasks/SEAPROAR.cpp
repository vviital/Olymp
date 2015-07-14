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

string yes = "LCG";
string no = "Xorshift";

int getnext(int x){
	x = x * 1103515245 + 12345;
	return (x / 65536) % 32768;
}

char convChar(int x){
	return x == 1 ? '1' : '0';
}

bool check(int x, string &s){
	int to = min(100, sz(s));
	if (x % 2 != s[0] - '0') return false;
	for(int i=1; i < to; ++i){
		x = getnext(x);
		if (x % 2 != s[i] - '0') return false;
	}
	return true;
}

void solve(){
	string s;
	cin >> s;
	bool ok = false;
	int bound = 1 << 17;
	for(int i=0; i <= bound; i++){
		if (check(i, s)){
			ok = true;
			break;
		}
	}
	if (ok) cout << yes;
	else cout << no;
	cout << "\n";
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	freopen("input.txt", "r", stdin);
	/*freopen("output.txt", "w", stdout);*/
#endif
	int t;
	scanf("%d", &t);
	while(t--) solve();
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
