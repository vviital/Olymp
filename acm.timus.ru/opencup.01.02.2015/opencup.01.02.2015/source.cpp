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
//bool cmp(double a, double b){
//	if (fabs(a - b) < 1e-9){
//		return true;
//	}
//	return false;
//}
//
//int myround(double x){
//	int add = 0;
//	if (x < 0) add = -1;
//	return add + (int) x;
//}
//
//double calcD(pdd a, pdd b){
//	double answer = fabs(b.X - a.X);
//	double add = 100;
//	int y1 = myround(a.Y);
//	int y2 = myround(b.Y);
//	forn(i, 2){
//		int buf = y2;
//		forn(j, 2){
//			add = min(add, 0. + fabs(a.Y - y1) + fabs(b.Y - y2) + fabs(.0 + y1 - y2));
//			y2++;
//		}
//		y2 = buf;
//		y1++;
//	}
//	answer += add;
//	return answer;
//}
//
//double d;
//
//double calc(double p, double line){
//	double val = d * d - line * line;
//	if (val < 0) return 0;
//	val = sqrt(val) + p;
//	return calcD(mp(0, p), mp(line, val));
//}
//
//double calc1(double p){
//	double val = d * d - p * p;
//	if (val < 0) return 0;
//	val = sqrt(val);
//	return p + val;
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
//	cin >> d;
//	double answer = 0;
//	forn(lin, 20){
//		if (lin > d) continue;
//		double step = 0.001 / 4.;
//		for(double tt = step; tt <= 1.; tt += step){
//			double l = tt - step;
//			double r = tt;
//			forn(iter, 200){
//				double m1 = l + (r - l) / 3.;
//				double m2 = r - (r - l) / 3.;
//				double val1 = calc(m1, lin);
//				double val2 = calc(m2, lin);
//				if (val1 < val2) l = m1;
//				else r = m2;
//			}
//			double val = calc(l, lin);
//			answer = max(answer, val);
//		}
//	}
//	double step = 0.001 / 4.;
//	for(double y=step; y<=20; y += step){
//		double l = y - step;
//		double r = y + step;
//		forn(iter, 200){
//			double m1 = l + (r - l) / 3.;
//			double m2 = r - (r - l) / 3.;
//			double val1 = calc1(m1);
//			double val2 = calc1(m2);
//			if (val1 < val2) l = m1;
//			else r = m1;
//		}
//		double val = calc1(l);
//		answer = max(answer, val);
//	}
//	cout << fixed << setprecision(15) << answer << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
