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
//const int maxn = 1e+5 + 100;
//
//int dp[30][maxn];
//int n, m;
//int arr[maxn];
//int pows[maxn];
//
//void build(){
//	int cur = 0;
//	for(int i=1; i<maxn; ++i){
//		if (i >= (1 << (cur + 1))) cur++;
//		pows[i] = cur;
//	}
//	forn(i, n) dp[0][i] = arr[i];
//	// 0 1 2 3
//	for(int i = 1; i < 25; ++i)
//		forn(j, n){
//			ll val = -1e+9;
//			int index = j + (1 << (i - 1));
//			if (index < n) val = dp[i - 1][index];
//			dp[i][j] = max(dp[i - 1][j], (int)val);
//		}
//}
//
//int getmax(int l, int r){
//	int len = r - l + 1;
//	// 0 1 2 3 4 5
//	int poww = pows[len];
//	int ll = dp[poww][l];
//	int rr = dp[poww][r - (1 << poww) + 1];
//	return max(ll, rr);
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
//	scanf("%d", &n);
//	forn(i, n) scanf("%d", &arr[i]);
//	build();
//	int x1, y1;
//	scanf("%d%d%d", &m, &x1, &y1);
//	ll ans = 0;
//	forn(i, m){
//		int l = x1;
//		int r = y1;
//		if (l > r) swap(l, r);
//		ans += getmax(l, r);
//		x1 = x1 + 7;
//		if (x1 >= n - 1) while(x1 >= n - 1) x1 -= n - 1;
//		y1 = y1 + 11;
//		if (y1 >= n) while(y1 >= n) y1 -= n;
//	}
//	printf("%lld\n", ans);
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
