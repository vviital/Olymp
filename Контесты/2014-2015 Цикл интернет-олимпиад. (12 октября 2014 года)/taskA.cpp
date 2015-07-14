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
//const int maxn = 1 << 17;
//vector<int> tree[2 * maxn];
//vector<int> mem;
//vector<int> del;
//
//void add(int x){
//	int t = sz(mem);
//	mem.push_back(x);
//	del.push_back(false);
//}
//
//void add(int vertex, int L, int R, int l, int r, int x){
//	if (r < L || R < l)
//		return;
//	if (L <= l && r <= R){
//		tree[vertex].push_back(x);
//		return;
//	}
//	int middle = (l + r) >> 1;
//	add(2 * vertex + 1, L, R, l, middle, x);
//	add(2 * vertex + 2, L, R, middle + 1, r, x);
//}
//
//int query(int vertex, int l, int r, int x){
//	while (sz(tree[vertex]) && del[tree[vertex].back()])
//		tree[vertex].pop_back();
//	if (l == r){
//		if (sz(tree[vertex])) return tree[vertex].back();
//		return -1;
//	}
//	int curans = -1;
//	if (sz(tree[vertex]))
//		curans = tree[vertex].back();
//	int middle = (l + r) >> 1;
//	if (x > middle)
//		return max(curans, query(2 * vertex + 2, middle + 1, r, x));
//	return max(curans, query(2 * vertex + 1, l, middle, x));
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("stacks.in", "r", stdin);
//	freopen("stacks.out", "w", stdout);
//#endif
//	ios_base::sync_with_stdio(false);
//	int n, m;
//	cin >> n >> m;
//	forn(i, m){
//		char ch;
//		cin >> ch;
//		if (ch == 'A'){
//			int l, r, x;
//			cin >> l >> r >> x;
//			l--, r--;
//			add(x);
//			add(0, l, r, 0, n - 1, sz(mem) - 1);
//			continue;
//		}
//		if (ch == 'G'){
//			int x;
//			cin >> x;
//			x--;
//			int ans = query(0, 0, n - 1, x);
//			if (ans != -1)
//				ans = mem[ans];
//			cout << ans << "\n";
//			continue;
//		}
//		int x;
//		cin >> x;
//		x--;
//		del[x] = true;
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}