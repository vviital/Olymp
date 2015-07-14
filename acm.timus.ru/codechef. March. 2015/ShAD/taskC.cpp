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
//const double e = 2.71828182845904523536;
//int maxn = 1e+8;
//
//double Ln(double x){
//	return log(x) / log(e);
//}
//
//double getvalue(double x){
//	return Ln(x) * Ln(x) / sqrt(x);
//}
//
//double calc(double x){
//	return 2 * sqrt(x) * (Ln(x) * Ln(x) - 4 * Ln(x) + 8);
//}
//
//double getans(double l, double r){
//	return calc(r) - calc(l);
//}
//
//int main(){
//#ifndef _DEBUG
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	double step = (e * e - 1.) / maxn;
//	double ans = 0;
//	for(double i = 1; i <= e * e; i += step){
//		ans += getvalue(i) * step;
//	}
//	//ans = getans(1, e * e);
//	cout << fixed << setprecision(6) << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
