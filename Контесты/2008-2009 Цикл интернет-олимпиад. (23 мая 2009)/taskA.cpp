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
//double sqr(double x){
//	return x * x;
//}
//
//double dist(double x1, double y1, double x2, double y2){
//	return sqrt(sqr(x1 - x2) + sqr(y1 - y2));
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("circle.in", "r", stdin);
//	freopen("circle.out", "w", stdout);
//#endif
//	double a, b, c;
//	cin >> a >> b >> c;
//	double x, y, r;
//	cin >> x >> y >> r;
//	c += a * x + b * y;
//	double ans = 0;
//	if (a == 0){
//		double Y = -c / b;
//		double d = max(0., r * r - Y * Y);
//		ans = 2 * sqrt(d);
//	}
//	else {
//		double A = b * b + a * a;
//		double B = 2 * b * c;
//		double C = c * c - a * a * r * r;
//		double D = B * B - 4 * A * C;
//		if (D >= 0){
//			D = sqrt(D);
//			double y1 = (-B + D) / 2. / A;
//			double y2 = (-B - D) / 2. / A;
//			double x1 = (-b * y1 - c) / a;
//			double x2 = (-b * y2 - c) / a;
//			ans = dist(x1, y1, x2, y2);
//		}
//	}
//	cout << fixed << setprecision(15) << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}