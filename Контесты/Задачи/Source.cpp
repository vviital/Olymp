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
//const int maxn = 110;
//int dp[maxn][maxn][maxn];
//int arr[maxn][maxn];
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	int n, m, k;
//	cin >> n >> m >> k;
//	for(int i = 1; i <= n; i++)
//		for(int j = 1; j <= m; j++)
//			cin >> arr[i][j];
//	forn(i, maxn) forn(j, maxn) forn(l, maxn) dp[i][j][l] = -INF;
//	dp[0][1][0] = 0;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			for (int K = 0; K <= k; K++){
//				dp[i][j][K] = max(dp[i - 1][j][K], dp[i][j - 1][K]) + arr[i][j];
//				if (K != 0){
//					dp[i][j][K] = max(dp[i][j][K], dp[i - 1][j][K - 1] - arr[i][j]);
//					dp[i][j][K] = max(dp[i][j][K], dp[i][j - 1][K - 1] - arr[i][j]);
//				}
//			}
//	int ans = -INF;
//	for (int i = 0; i <= k; i++){
//		ans = max(ans, dp[n][m][i]);
//	}
//	cout << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}