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
//const int maxn = 2400;
//
//int maxx[maxn];
//int arr[maxn][maxn];
//int dp[maxn][maxn];
//
//void solve(){
//	int n, h, I;
//	scanf("%d%d%d", &n, &h, &I);
//	forn(i, n){
//		int count;
//		scanf("%d", &count);
//		forn(j, count){
//			int cnt;
//			scanf("%d", &cnt);
//			arr[i + 1][cnt]++;
//		}
//	}
//	forn(i, maxn) forn(j, maxn) dp[i][j] = -2e+9;
//	dp[1][h + I] = 0;
//	maxx[h + I] = 0;
//	for(int fl = h; fl >= 0; fl--){
//		int curmax = -2e+9;
//		for(int i = 1; i <= n; i++){
//			dp[i][fl] = arr[i][fl] + max(maxx[fl + I], dp[i][fl + 1]);
//			curmax = max(curmax, dp[i][fl]);
//		}
//		maxx[fl] = curmax;
//	}
//	int ans = 0;
//	forn(i, maxn) ans = max(ans, dp[i][0]);
//	printf("%d\n", ans);
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
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
