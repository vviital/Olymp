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
//void scan(pdd &p){
//	scanf("%lf%lf", &p.X, &p.Y);
//}
//
//pdd vect(pdd beg, pdd end){
//	return mp(end.X - beg.X, end.Y - beg.Y);
//}
//
//double sqr(double x){
//	return x * x;
//}
//
//double norm(pdd v){
//	return sqrt(sqr(v.X) + sqr(v.Y));
//}
//
//pdd add(pdd a, pdd v, double len){
//	double n = norm(v);
//	v.X /= n;
//	v.Y /= n;
//	v.X *= len;
//	v.Y *= len;
//	a.X = a.X + v.X;
//	a.Y = a.Y + v.Y;
//	return a;
//}
//
//pdd minus1(pdd a, pdd b){
//	return mp(a.X - b.X, a.Y - b.Y);
//}
//
//vector<pdd> points;
//
//double count(pdd point){
//	double ans = 0;
//	forn(i, sz(points)){
//		ans += norm(minus1(point, points[i]));
//	}
//	return ans;
//}
//
//pdd tern(pdd beg, pdd end){
//	pdd v = vect(beg, end);
//	double l = 0;
//	double r = norm(v);
//	forn(iter, 200){
//		double m1 = l + (r - l) / 3.;
//		double m2 = r - (r - l) / 3.;
//		pdd cond1 = add(beg, v, m1);
//		pdd cond2 = add(beg, v, m2);
//		double vm1 = count(cond1);
//		double vm2 = count(cond2);
//		if (vm2 > vm1){
//			r = m2;
//		}
//		else {
//			l = m1;
//		}
//	}
//	pdd ans = add(beg, v, l);
//	return ans;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);*/
//#endif
//	pdd p1, p2;
//	scan(p1);
//	scan(p2);
//	int n;
//	scanf("%d", &n);
//	points.resize(n);
//	forn(i, n) scan(points[i]);
//	pdd v = vect(p1, p2);
//	pdd beg = add(p1, v, 1000000);
//	v.X *= -1;
//	v.Y *= -1;
//	pdd end = add(p1, v, 1000000);
//	pdd ans = tern(beg, end);
//	printf("%.15lf\n", count(ans));
//	printf("%.15lf %.15lf\n", ans.X, ans.Y);
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}