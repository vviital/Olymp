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
//#define pdd pair<ll, ll>
//
//double sqr(double a){
//	return a * a;
//}
//
//double dist(pdd a, pdd b){
//	return sqr(a.X - b.X) + sqr(a.Y - b.Y);
//}
//
//double best = 1e+18;
//vector<bool> used;
//vector<pdd> points;
//
//void dfs(int cur, double curans){
//	used[cur] = true;
//	int index = -1;
//	double curdist = 1e+18;
//	for (int i = 0; i < sz(points); i++){
//		if (!used[i] && dist(points[cur], points[i]) < curdist){
//			curdist = dist(points[cur], points[i]);
//			index = i;
//		}
//	}
//	if (index != -1)
//		curans += curdist;
//	if (index == -1){
//		if (curans < best){
//			best = curans;
//		}
//		return;
//	}
//	dfs(index, curans);
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("problem.in", "r", stdin);
//	freopen("problem.out", "w", stdout);
//#endif
//	int n;
//	cin >> n;
//	points.resize(n);
//	forn(i, n){
//		cin >> points[i].X >> points[i].Y;
//	}
//	forn(iter, n){
//		used.clear();
//		used.resize(n);
//		dfs(iter, 0);
//	}
//	cout << best << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}