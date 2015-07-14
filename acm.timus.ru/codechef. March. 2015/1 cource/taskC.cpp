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
//const int maxn = 1100, maxm = 1e+4 + 100;
//
//bool dp[maxn][maxm];
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	int a, b, c, n;
//	scanf("%d%d%d%d", &a, &b, &c, &n);
//	vector<int> d(n);
//	forn(i, n) scanf("%d", &d[i]);
//	int index = 0;
//	int cnt = -1;
//	forn(i, sz(d)) if (d[i] > c && d[i] < d[index]) index = i;
//	if (d[index] > c) cnt = d[index];
//	vector<pii> cost;
//	for(int i=0; i<sz(d); ++i){
//		if (d[i] <= c) cost.pb(mp(d[i], i));
//	}
//	forn(i, sz(cost)){
//		for(int i=0; i<
//	}
//	int ans = a;
//	if (ans == a + b){
//		cout << ans << "\n";
//		cout << -1 << "\n";
//		return 0;
//	}
//	
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
