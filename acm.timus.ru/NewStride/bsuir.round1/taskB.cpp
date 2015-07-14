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
//#define pdd pair<long double, long double>
//
//long double sqr(long double x){
//	return x * x;
//}
//
//int cmp(double x, double y){
//	if (fabs(x - y) < 1e-10) return 0;
//	if (x < y) return -1;
//	return 1;
//}
//
//long double mySqrt(long double x){
//	long double l = 0, r = x + 100;
//	forn(iter, 100){
//		long double m = (r + l) / 2;
//		if (cmp(m * m, x) == -1) l = m;
//		else r = m;
//	}
//	return l;
//}
//
//long double dist(pdd a, pdd b){
//	return sqrt(sqr(a.X - b.X) + sqr(a.Y - b.Y));
//}
//
//void print(long double x){
//	cout << fixed << setprecision(15) << x << "\n";
//}
//
//long double calcD(pdd a, pdd b, pdd o){
//	return dist(a, o) + dist(b, o);
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
//	pdd a, b;
//	cin >> a.X >> a.Y >> b.X >> b.Y;
//	if (a.X > b.X) swap(a, b);
//	b.Y *= -1;
//	double A = a.Y - b.Y;
//	double B = b.X - a.X;
//	double C = - (A * a.X + B * a.Y);
//	double cond = - C / A;
//	print(cond);
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
