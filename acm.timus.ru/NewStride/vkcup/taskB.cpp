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
//const int maxn = 2e+5 + 100;
//
//vector<int> arr[maxn];
//ll dp[maxn][2];
//ll a[maxn];
//
//void dfs(int cur){
//	if (sz(arr[cur]) == 0) {
//		dp[cur][0] = a[cur];
//		return;
//	}
//	ll dp0 = 0, dp1 = -1e+18;
//	forn(i, sz(arr[cur])){
//		int to = arr[cur][i];
//		dfs(to);
//		ll pdp0 = dp0;
//		ll pdp1 = dp1;
//		dp0 = max(pdp1 + dp[to][1], pdp0 + dp[to][0]);
//		dp1 = max(pdp1 + dp[to][0], pdp0 + dp[to][1]);
//	}
//	dp[cur][0] = dp0 + a[cur];
//	dp[cur][1] = dp1;
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
//	int n;
//	scanf("%d", &n);
//	forn(i, n){
//		int aa, pred;
//		scanf("%d%d", &pred, &aa);
//		--pred;
//		if (pred != -2)
//			arr[pred].pb(i);
//		a[i] = aa;
//	}
//	dfs(0);
//	cout << max(dp[0][0], dp[0][1]) << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
