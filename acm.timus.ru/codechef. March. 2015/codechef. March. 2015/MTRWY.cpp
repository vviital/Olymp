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
//const int maxn = 1e+6 + 200000;
//const int maxm = 1200;
//
//int snm[maxn];
//pii g[maxn][4];
//int sizes[maxn];
//bool used[maxn];
//bool was1[maxm][maxm], was2[maxm][maxm];
//int x[] = {0, 1, 0, -1};
//int y[] = {1, 0, -1, 0};
//int table[maxm][maxm];
//int mem[maxn];
//int n, m, q;
//
//int make_index(int x, int y){
//	//return table[x][y];
//	return (x << 10) + y;
//}
//
//inline int dep(int x){
//	int cnt = 0;
//	while(x != snm[x]){
//		mem[cnt++] = x;
//		x = snm[x];
//	}
//	forn(i, cnt) snm[mem[i]] = x;
//	return x;
//}
//
//bool IsUnion(int x, int y){
//	x = dep(x);
//	y = dep(y);
//	return x == y;
//}
//
//void Union(int x, int y){
//	x = dep(x);
//	y = dep(y);
//	//if (sizes[x] < sizes[y]) swap(x, y);
//	snm[y] = x;
//}
//
//struct node{
//	int x1, y1, x2, y2;
//
//	node() : x1(0), y1(0), x2(0), y2(0) { }
//
//	node(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) { }
//
//};
//
//int getint(){
//	int ans = -1;
//	while(true){
//		char ch = getchar();
//		if (ch >= '0' && ch <= '9'){
//			if (ans == -1) ans = ch - '0';
//			else ans = ans * 10 + ch - '0';
//		} else if (ans != -1) break;
//	}
//	return ans;
//}
//
//vector<node> readQ(){
//	vector<node> re;
//	forn(i, q){
//		int type;
//		scanf("%d", &type);
//		if (type == 1){
//			int x1, y1;
//			x1 = getint();
//			y1 = getint();
//			//scanf("%d%d", &x1, &y1);
//			x1--, y1--;
//			if (!was1[x1][y1]){
//				re.pb(node(-1, -1, x1, y1));
//				was1[x1][y1] = true;
//			}
//			continue;
//		}
//		if (type == 2){
//			int x1, y1;
//			x1 = getint();
//			y1 = getint();
//			//scanf("%d%d", &x1, &y1);
//			x1--, y1--;
//			if (!was2[x1][y1]){
//				re.pb(node(-2, -2, x1, y1));
//				was2[x1][y1] = true;
//			}
//			continue;
//		}
//		if (type == 4){
//			re.pb(node(-4, -4, -4, -4));
//			continue;
//		}
//		int x1, y1, x2, y2;		
//		x1 = getint();
//		y1 = getint();
//		x2 = getint();
//		y2 = getint();
//		//scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		x1--, y1--, x2--, y2--;
//		re.pb(node(x1, y1, x2, y2));
//	}
//	forn(i, sz(re)){
//		if (re[i].x1 == -1){
//			was1[re[i].x2][re[i].y2] = false;
//		}
//		if (re[i].x1 == -2){
//			was2[re[i].x2][re[i].y2] = false;
//		}
//	}
//	return re;
//}
//
//void make_G(vector<node> &re){
//	int maxindex = make_index(n, m);
//	forn(i, maxindex) snm[i] = i, used[i] = false;
//	forn(i, maxindex) forn(j, 4) g[i][j] = mp(0, 1);
//	forn(i, n) forn(j, m){
//		int ind1 = make_index(i, j);
//		forn(iter, 4){
//			int x1 = i + x[iter];
//			int y1 = j + y[iter];
//			if (x1 < 0 || x1 >= n || y1 < 0 || y1 >= m) continue;
//			int ind2 = make_index(x1, y1);
//			g[ind1][iter] = mp(ind2, 0);
//		}
//	}
//	forn(i, sz(re)){
//		if (re[i].x1 == -1){
//			int ind1 = make_index(re[i].x2, re[i].y2);
//			int ind2 = make_index(re[i].x2, re[i].y2 + 1);
//			g[ind1][0] = mp(0, 1);
//			g[ind2][2] = mp(0, 1);
//			continue;
//		}
//		if (re[i].x1 == -2){
//			int ind1 = make_index(re[i].x2, re[i].y2);
//			int ind2 = make_index(re[i].x2 + 1, re[i].y2);
//			g[ind1][1] = mp(0, 1);
//			g[ind2][3] = mp(0, 1);
//			continue;
//		}
//	}
//}
//
//int bfs(int root){
//	queue<int> q;
//	used[root] = true;
//	q.push(root);
//	int size = 0;
//	while(sz(q)){
//		int cur = q.front(); q.pop();
//		size++;
//		snm[cur] = root;;
//		forn(i, 4){
//			if (g[cur][i].Y == 1) continue;
//			int to = g[cur][i].X;
//			if (!used[to]){
//				used[to] = true;
//				q.push(to);
//			}
//		}
//	}
//	return size;
//}
//
//void Union(int &curmax, int x, int y){
//	x = dep(x);
//	y = dep(y);
//	if (x == y) return;
//	int sz1 = sizes[x];
//	int sz2 = sizes[y];
//	Union(x, y);
//	x = dep(x);
//	sizes[x] = sz1 + sz2;
//	curmax = max(curmax, sizes[x]);
//}
//
//void solve(){
//	//scanf("%d%d%d", &n, &m, &q);
//	n = getint(), m = getint(), q = getint();
//	//forn(i, n + 2) forn(j, m + 2) table[i][j] = (i << 10) + j;
//	vector<node> re = readQ();
//	make_G(re);
//	int curmax = 0;
//	forn(i, n) forn(j, m){
//		int root = make_index(i, j);
//		root = dep(root);
//		if (!used[root]){
//			int size = bfs(root);
//			curmax = max(curmax, size);
//			root = dep(root);
//			sizes[root] = size;
//		}
//	}
//	reverse(ALL(re));
//	ll ans = 0;
//	forn(i, sz(re)){
//		if (re[i].x1 == -4){
//			ans += curmax;
//			continue;
//		}
//		if (re[i].x1 >= 0){
//			int ind1 = make_index(re[i].x1, re[i].y1);
//			int ind2 = make_index(re[i].x2, re[i].y2);
//			ans += IsUnion(ind1, ind2);
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
//	while(t--){
//		solve();
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
