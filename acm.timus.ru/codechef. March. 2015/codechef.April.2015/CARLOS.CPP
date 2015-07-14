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
//#define ms2(x) memset(x, 127, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pdd pair<double, double>
//
//const int maxn = 200000 + 100;
//
//int arr[maxn];
//
//int g[300][300];
//int dp[maxn][300];
//int minn[300];
//
//int getmin(int l){
//	return minn[l];
//}
//
//void solve(){
//	int n, m, k;
//	scanf("%d%d%d", &m, &k, &n);
//	ms(g);
//	forn(i, k){
//		int x, y;
//		scanf("%d%d", &x, &y);
//		x--, y--;
//		g[x][y] = g[y][x] = true;
//	}
//	forn(i, n) {
//		scanf("%d", &arr[i]);
//		arr[i]--;
//	}
//	forn(k, m) forn(i, m) forn(j, m){
//		g[i][j] = g[i][j] || (g[i][k] && g[k][j]);
//	}
//	ms2(dp);
//	int cnt = 1e+9;
//	forn(i, m) if (g[arr[0]][i]) dp[0][i] = 1;
//	dp[0][arr[0]] = 0;
//	for(int i = 1; i < n; ++i) {
//		minn[0] = dp[i - 1][0];
//		for(int j = 1; j < m; ++j){
//			minn[j] = min(dp[i - 1][j], minn[j - 1]);
//		}
//		forn(j, m){
//			if (arr[i] == j){
//				dp[i][j] = getmin(j);
//			} else {
//				if (g[arr[i]][j] == false) continue;
//				dp[i][j] = 1 + getmin(j);
//			}
//		}
//	}
//	forn(i, m) cnt = min(cnt, dp[n - 1][i]);
//	if (cnt >= 1e+9) cnt = -1;
//	printf("%d\n", cnt);
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
//	int t;
//	scanf("%d", &t);
//	while(t--) solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
