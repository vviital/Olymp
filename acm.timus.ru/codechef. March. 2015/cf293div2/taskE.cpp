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
//const int maxn = 200;
//double dp[maxn][maxn][maxn];
//int n;
//vector<pii> points;
//
//double sqr(double x){
//	return x * x;
//}
//
//double getdist(pii a, pii b){
//	return sqrt(sqr(a.X - b.X) + sqr(a.Y - b.Y));
//}
//
//double rec(int l, int r, int begg){
//	if (r - l + 1 == 3) return 0;
//	if (dp[l][r][begg] != -1) return dp[l][r][begg];
//	dp[l][r][begg] = dist(points[l + 1], points[r]) + 
//	return dp[l][r][begg];
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
//	cin >> n;
//	forn(i, n + 1) forn(j, n + 1) dp[i][j] = -1;
//	points.resize(n);
//	forn(i, n) cin >> points[i].X >> points[i].Y;
//	double ans = rec(0, n - 1);
//	cout << fixed << setprecision(15) << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
