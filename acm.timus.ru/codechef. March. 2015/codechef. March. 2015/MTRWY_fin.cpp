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
//const int maxn = 1e+6 + 20000;
//
//pii g[maxn][4];
//
//int snm[maxn];
//int sizes[maxn];
//int x[] = {0, 1, 0, -1};
//int y[] = {1, 0, -1, 0};
//bool used[maxn];
//int n, m, q;
//int mem[maxn];
//
//inline int make_index(int x, int y){
//	return x * m + y;
//}
//
//struct node{
//	int x1, y1, x2, y2;
//	int ind;
//
//	node() : x1(0), y1(0), x2(0), y2(0), ind(0) { }
//
//	node(int x1, int y1, int x2, int y2, int ind){
//		this->x1 = x1;
//		this->y1 = y1;
//		this->x2 = x2;
//		this->y2 = y2;
//		this->ind = ind;
//	}
//	
//	bool operator < (const node &o) const{
//		if (x1 == o.x1 && x2 == o.x2 && y1 == o.y1 && y2 == o.y2) return ind < o.ind;
//		return mp(mp(x1, y1), mp(x2, y2)) < mp(mp(o.x1, o.y1), mp(o.x2, o.y2));
//	}
//
//	bool operator == (const node &o) const{
//		if (x1 == -4) return false;
//		if (x1 >= 0) return false;
//		return mp(mp(x1, y1), mp(x2, y2)) == mp(mp(o.x1, o.y1), mp(o.x2, o.y2));
//	}
//};
//
//bool cmp(const node &o1, const node &o2){
//	return o1.ind < o2.ind;
//}
//
//int dep(int x1){
//	int cnt = 0;
//	while(x1 != snm[x1]){
//		mem[cnt++] = x1;
//		x1 = snm[x1];
//	}
//	forn(i, cnt) snm[mem[i]] = x1;
//	return x1;
//}
//
//bool isUn(int x, int y){
//	x = dep(x);
//	y = dep(y);
//	return x == y;
//}
//
//void Union(int x, int y){
//	x = dep(x);
//	y = dep(y);
//	if (x & 1) swap(x, y);
//	snm[x] = y;
//}
//
//void Union(int &curmax, int x, int y){
//	x = dep(x);
//	y = dep(y);
//	if (x == y) return;
//	int sz1 = sizes[x];
//	int sz2 = sizes[y];
//	curmax = max(curmax, sz1 + sz2);
//	Union(x, y);
//	x = dep(x);
//	sizes[x] = sz1 + sz2;
//}
//
//inline int readInt(){
//	int ans = -1;
//	bool ok = true;
//	while(true){
//		char ch = getchar();
//		if (ch < '0' || ch > '9') { if (ans != -1) break; }
//		else {
//			if (ans == -1) ans = 0;
//			ans = 10 * ans + ch - '0';
//		}
//
//	}
//	return ans;
//}
//
//vector<node> readQ(){
//	vector<node> r(q);
//	forn(i, q){
//		int type;
//		type = readInt();
//		if (type == 1 || type == 2){
//			int x1, y1;
//			x1 = readInt(), y1 = readInt();
//			//scanf("%d%d", &x1, &y1);
//			x1--, y1--;
//			r[i] = (node(-type, -type, x1, y1, i));
//			continue;
//		}
//		if (type == 4){
//			r[i] = (node(-4, -4, -4, -4, i));
//			continue;
//		}
//		int x1, y1, x2, y2;
//		x1 = readInt(), y1 = readInt(), x2 = readInt(), y2 = readInt();
//		//scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		x1--, y1--, x2--, y2--;
//		r[i] = (node(x1, y1, x2, y2, i));
//	}
//	/*sort(ALL(r));
//	r.erase(unique(ALL(r)), r.end());
//	sort(ALL(r), cmp);*/
//	return r;
//}
//
//void makeG(vector<node> &re){
//	int ind = make_index(n, m);
//	forn(i, ind) forn(j, 4) g[i][j] = mp(0, 1);
//	forn(i, n) forn(j, m){
//		int ind1 = make_index(i, j);
//		forn(iter, 4){
//			int xx = i + x[iter];
//			int yy = j + y[iter];
//			if (xx < 0 || xx >= n || yy < 0 || yy >= m)	continue;
//			int ind2 = make_index(xx, yy);
//			g[ind1][iter] = mp(ind2, 0);
//		}
//	}
//	forn(i, sz(re)){
//		if (re[i].x1 == -1){
//			int ind1 = make_index(re[i].x2, re[i].y2);
//			int ind2 = ind1 + 1;
//			g[ind1][0] = mp(0, 1);
//			g[ind2][2] = mp(0, 1);
//		} else
//		if (re[i].x1 == -2){
//			int ind1 = make_index(re[i].x2, re[i].y2);
//			int ind2 = ind1 + m;
//			g[ind1][1] = mp(0, 1);
//			g[ind2][3] = mp(0, 1);
//		}
//	}
//}
//
//int dfs(int cur, int root){
//	queue<int> q;
//	q.push(cur);
//	used[cur] = true;
//	int size = 0;
//	while(sz(q)){
//		int c = q.front(); q.pop();
//		Union(c, root);
//		size++;
//		forn(i, 4){
//			if (g[c][i].Y) continue;
//			int to = g[c][i].X;
//			if (!used[to]){
//				used[to] = true;
//				q.push(to);
//			}
//		}
//	}
//	return size;
//}
//
//void solve(){
//	scanf("%d%d%d", &n, &m, &q);
//	vector<node> re = readQ();
//	int iind = make_index(n, m);
//	forn(i, iind) snm[i] = i;
//	makeG(re);
//	reverse(ALL(re));
//	ll ans = 0;
//	int curmax = 0;
//	printf("1\n");
//	forn(i, n) forn(j, m){
//		int index = make_index(i, j);
//		int root = dep(index);
//		if (!used[root]){
//			int size = dfs(root, root);
//			curmax = max(size, curmax);
//			root = dep(root);
//			sizes[root] = size;
//		}
//	}
//	forn(i, sz(re)){
//		if (re[i].x1 == -4){
//			ans += curmax;
//			continue;
//		}
//		if (re[i].x1 >= 0){
//			int ind1 = make_index(re[i].x1, re[i].y1);
//			int ind2 = make_index(re[i].x2, re[i].y2);
//			ans += isUn(ind1, ind2);
//			continue;
//		}
//		if (re[i].x1 == -1){
//			int ind1 = make_index(re[i].x2, re[i].y2);
//			int ind2 = make_index(re[i].x2, re[i].y2 + 1);
//			Union(curmax, ind1, ind2);
//			continue;
//		}
//		int ind1 = make_index(re[i].x2, re[i].y2);
//		int ind2 = make_index(re[i].x2 + 1, re[i].y2);
//		Union(curmax, ind1, ind2);
//		continue;
//	}
//	int ind = min(maxn, make_index(n, m));
//	forn(i, ind) sizes[i] = used[i] = 0;
//	printf("%lld\n", ans);
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
//	int t;
//	scanf("%d", &t);
//	while(t--) solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
