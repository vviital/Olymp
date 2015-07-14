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

const int maxn = 150;

ldb dp[maxn + 10][maxn + 10][20];
ldb dp1[maxn];
ldb sumdp[20][maxn];

pii val[maxn][maxn];
int c[maxn], f[maxn];

int parseS(string &s, int pos){
	int ans = 0;
	for(int i=pos; i<sz(s); i++) ans = ans * 10 + s[i] - '0';
	return ans;
}

pii parse(string &s){
	if (s[0] == '+') return mp(parseS(s, 1), 1);
	return mp(parseS(s, 0), 0);
}
pii read(){
	string s;
	cin >> s;
	return parse(s);
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	forn(i, n){
		cin >> c[i] >> f[i];
		forn(j, f[i]){
			val[i][j] = read();
		}
	}

	forn(iter, n){
		ms(dp), ms(dp1);
		dp[0][0][0] = 1.;
		double mul = 1. / f[iter];
		forn(i, maxn) forn(j, maxn) forn(k, c[iter] + 1) forn(step, f[iter]){
			int to = i + val[iter][step].X;
			if (to >= maxn) continue;
			if (val[iter][step].Y == 1 && k != c[iter]){
				dp[to][j+1][k] += dp[i][j][k] * mul;
			} else {
				dp[to][j][k+1] += dp[i][j][k] * mul;
			}
		}
		forn(i, maxn) forn(j, maxn) dp1[i] += dp[i][j][c[iter]];
		for(int i=1; i<maxn; i++) sumdp[iter][i] = sumdp[iter][i-1] + dp1[i];
	}

	int k;
	cin >> k;
	for(int i=1; i<=k; i++){
		int ans = 0;
		ldb best = 0;
		forn(iter, n) {
			ldb val = 1. - sumdp[iter][i];
			if (val > best) best = val, ans = iter;
		}
		cout << ans + 1 << "\n";
	}
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
