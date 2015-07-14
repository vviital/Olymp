//#include <iostream>
//#include <sstream>
//#include <fstream>
//#include <iomanip>
//#include <string>
//#include <algorithm>
//#include <cmath>
//#include <ctime>
//#include <vector>
//#include <stack>
//#include <map>
//#include <set>
//#include <queue>
//#include <cstring>
//#include <bitset>
//#include <cstdio>
//#include <cstdlib>
//#include <cassert>
//
//using namespace std;
//
//typedef long long ll;
//typedef double db;
//typedef long double ldb;
//typedef string str;
//
//#define forn(i, n) for(int i = 0; i < n; ++i)
//#define INF 1e+9
//#define EPS 1e-9
//#define PI 3.1415926535897932384626433832795
//#define mp(a, b) make_pair(a, b)
//#define pb(a) push_back(a)
//#define X first
//#define Y second
//#define ms(x) memset(x, 0, sizeof(x))
//#define ms1(x) memset(x, -1, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pdd pair<double, double>
//
//const int maxn = 3000;
//
//long double fact[maxn];
//
//void precalc(){
//	fact[0] = 0;
//	fact[1] = 0;
//	for(int i=2; i < maxn; ++i){
//		fact[i] = fact[i - 1] + log(1. * i);
//	}
//}
//
//long double binPow(double value, int p){
//	long double ans = 1;
//	long double mul = value;
//	while(p){
//		if (p & 1){
//			ans = ans * mul;
//		}
//		mul = mul * mul;
//		p >>= 1;
//	}
//	return ans;
//}
//
//long double calcC(int n, int k){
//	if (n < k) return 0;
//	return fact[n] - fact[k] - fact[n - k];
//}
//
//long double dp[maxn][maxn];
//
//void calc(int t, int n, long double p){
//	dp[0][0] = 1.;
//	forn(i, t + 1){
//		forn(j, n + 1){
//			if (j == n){
//				dp[i+1][n] += dp[i][n];
//				continue;
//			}
//			dp[i+1][j] += dp[i][j] * (1 - p);
//			if (j + 1 <= n)
//			dp[i+1][j+1] += dp[i][j] * p;
//		}
//	}
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	ll n, t;
//	long double p;
//	cin >> n >> p >> t;
//	long double ans = 0;
//	precalc();
//	calc(t, n, p);
//	forn(i, n + 1){
//		long double value = dp[t][i];
//		ans += i * value;
//	}
//	cout << fixed << setprecision(15) << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
