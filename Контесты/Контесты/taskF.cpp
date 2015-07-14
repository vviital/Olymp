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
//#define pll pair<int, int>
//
//ll l, r;
//
//ll intersect(pll a, pll b){
//	if (a.X >= b.Y || b.X >= a.Y){
//		return 0;
//	}
//	int l1 = a.Y - a.X;
//	int l2 = b.Y - b.X;
//	if (l1 < l2) swap(a, b);
//	if (a.X <= b.X && b.Y <= a.Y){
//		return b.Y - b.X;
//	}
//	return min(b.Y, a.Y) - max(b.X, a.X);
//}
//
//ll intersect(vector<pll> &a, vector<pll> &b){
//	int pointer = 0;
//	ll res = 0;
//	for (int i = 0; i < sz(b); i++){
//		while (pointer < sz(a) && a[pointer].Y <= b[i].X){
//			pointer++;
//		}
//		if (pointer == sz(a)) break;
//		bool fl = false;
//		while (pointer < sz(a) && intersect(b[i], a[pointer])){
//			res += intersect(b[i], a[pointer]);
//			pointer++;
//			fl = true;
//		}
//		if (fl){
//			pointer--;
//		}
//	}
//	return res;
//}
//
//ll calc1(vector<pll> &a, vector<pll> &b, int x){
//	ll best = 1e+18;
//	for (int i = 0; i < sz(b); i++){
//		int dif = b[i].X - (ll)x;
//		vector<pll> cur = b;
//		bool good = true;
//		for (int j = 0; j < sz(b); j++){
//			if (b[j].X - (ll)dif < l) good = false;
//			if (b[j].Y - (ll)dif > r) good = false;
//			cur[j].X = b[j].X - dif;
//			cur[j].Y = b[j].Y - dif;
//		}
//		if (cur.back().Y > r) continue;
//		if (cur[0].X < l) continue;
//		if (!good) continue;
//		best = min(best, intersect(a, cur));
//	}
//	return best;
//}
//
//ll calc2(vector<pll> &a, vector<pll> &b, int x){
//	ll best = 1e+18;
//	for (int i = 0; i < sz(b); i++){
//		int dif = b[i].Y - (ll)x;
//		vector<pll> cur = b;
//		bool good = true;
//		for (int j = 0; j < sz(b); j++){
//			if (b[j].X - (ll)dif < l) good = false;
//			if (b[j].Y - (ll)dif > r) good = false;
//			cur[j].X = b[j].X - dif;
//			cur[j].Y = b[j].Y - dif;
//		}
//		if (cur.back().Y > r) continue;
//		if (cur[0].X < l) continue;
//		if (!good) continue;
//		best = min(best, intersect(a, cur));
//	}
//	return best;
//}
//
//ll L(pll a){
//	return a.Y - a.X;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("opposition.in", "r", stdin);
//	freopen("opposition.out", "w", stdout);
//#endif
//	int n, m;
//	cin >> n >> m;
//	cin >> l >> r;
//	vector<pll> a(n), b(m);
//	forn(i, n) cin >> a[i].X >> a[i].Y;
//	forn(i, m) cin >> b[i].X >> b[i].Y;
//	ll best = 1e+18;
//	best = min(best, calc1(a, b, l));
//	best = min(best, calc2(a, b, r));
//	forn(i, n){
//		best = min(best, calc1(a, b, a[i].Y));
//		best = min(best, calc2(a, b, a[i].X));
//	}
//	cout << best << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}