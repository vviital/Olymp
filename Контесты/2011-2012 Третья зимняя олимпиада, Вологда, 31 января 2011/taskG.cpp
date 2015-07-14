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
//const int maxn = 1 << 18;
//
//vector<pii> points;
//vector<pdd> childs;
//
//int tree[2 * maxn];
//int add[2 * maxn];
//
//inline void push(int v, int l, int r){
//	tree[v] += (r - l + 1) * add[v];
//	if (l != r){
//		add[2 * v + 1] += add[v];
//		add[2 * v + 2] += add[v];
//	}
//	add[v] = 0;
//}
//
//inline void recalc(int v, int l, int r){
//	if (l == r) return;
//	tree[v] = tree[2 * v + 1] + tree[2 * v + 2] + add[v] * (r - l + 1);
//	add[v] = 0;
//}
//
//inline void Add(int v, int L, int R, int l, int r, int value){
//	push(v, l, r);
//	if (L <= l && r <= R){
//		add[v] += value;
//		push(v, l, r);
//		return;
//	}
//	if (r < L || R < l){
//		return;
//	}
//	int middle = (l + r) >> 1;
//	Add(2 * v + 1, L, R, l, middle, value);
//	Add(2 * v + 2, L, R, middle + 1, r, value);
//	recalc(v, l, r);
//}
//
//inline int getsum(int v, int L, int R, int l, int r){
//	push(v, l, r);
//	if (L <= l && r <= R) {
//		return tree[v];
//	}
//	if (r < L || R < l){
//		return 0;
//	}
//	int middle = (l + r) >> 1;
//	int ls = getsum(2 * v + 1, L, R, l, middle);
//	int rs = getsum(2 * v + 2, L, R, middle + 1, r);
//	return ls + rs;
//}
//
//vector<pair<pii, pii> > seg;
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);*/
//#endif
//	int n;
//	cin >> n;
//	points.resize(n);
//	map<double, int> YY;
//	forn(i, n){
//		cin >> points[i].X >> points[i].Y;
//		YY[points[i].Y] = -1;
//	}
//	for (int i = 0; i < sz(points); i++){
//		int to = (i + 1) % sz(points);
//		if (points[to].X == points[i].X){
//			pii point = mp(min(points[i].Y, points[to].Y), max(points[i].Y, points[to].Y));
//			seg.push_back(mp(point, mp(points[i].X, 1)));
//			if (points[to].Y > points[i].Y)
//				seg.back().Y.Y = -1;
//			swap(seg.back().X, seg.back().Y);
//		}
//	}
//	sort(ALL(seg));
//	int T = 0;
//	YY[INF + 1] = -1;
//	YY[-INF - 1] = -1;
//	for (map<double, int>::iterator it = YY.begin(); it != YY.end(); ++it){
//		(*it).Y = 2 * (++T);
//	}
//	int m;
//	cin >> m;
//	childs.resize(m);
//	forn(i, m){
//		cin >> childs[i].X >> childs[i].Y;
//	}
//	sort(ALL(childs));
//	int count = 0;
//	int pointer = 0;
//	forn(iter, sz(childs)){
//		while (pointer < sz(seg) && seg[pointer].X.X <= childs[iter].X){
//			int l = YY[seg[pointer].Y.X];
//			int r = YY[seg[pointer].Y.Y];
//			Add(0, l, r, 0, 2 * sz(YY), seg[pointer].X.Y);
//			pointer++;
//		}
//		map<double, int>::iterator it = YY.upper_bound(childs[iter].Y);
//		int r = (*it).Y - 1;
//		it--;
//		int l = (*it).Y + 1;
//		int sum = getsum(0, l, r, 0, 2 * sz(YY));
//		count += sum >= 1;
//	}
//	cout << count << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}