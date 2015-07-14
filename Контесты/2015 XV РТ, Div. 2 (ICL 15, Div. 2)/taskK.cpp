//#define _CRT_SECURE_NO_WARNINGS
//
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
//const int maxn = 100;
//ll dp[maxn][maxn];
//
//void rec(int n, int k){
//	if (dp[n][k] != -1) return;
//	if (k == 0){
//		dp[n][k] = 1;
//		return;
//	}
//	if (k > 2 * n){
//		dp[n][k] = 0;
//		return;
//	}
//	rec(n - 1, k);
//	dp[n][k] = dp[n - 1][k];
//	for (int i = 2; i <= n; i++){
//		for (int lk = 0; lk <= k - 1; lk++){
//			rec(i - 2, lk);
//			rec(n - i, k - 1 - lk);
//			dp[n][k] += dp[i - 2][lk] * dp[n - i][k - 1 - lk];
//		}
//	}
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);*/
//#endif
//	int n, k;
//	scanf("%d%d", &n, &k);
//	/*for (n = 1; n <= 5; n++)
//		for (k = 1; k <= 5; k++){*/
//			forn(i, maxn) forn(j, maxn) dp[i][j] = -1;
//			rec(n, k);
//			//cout << "n = " << n << " k = " << k << "\t";
//			cout << dp[n][k] << "\n";
//		//}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}