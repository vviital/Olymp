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
//map<int, map<int, int> > mm;
//map<int, pii> revmm;
//
//int x[] = {0, 1, 0, -1};
//int y[] = {1, 0, -1, 0};
//
//struct node{
//	int index, d, dir;
//
//	node(){
//		index = d = dir = 0;
//	}
//
//	node(int index, int d, char dir){
//		this->index = index;
//		this->d = d;
//		if (dir == 'N') this->dir = 0;
//		if (dir == 'E') this->dir = 1;
//		if (dir == 'S') this->dir = 2;
//		if (dir == 'W') this->dir = 3;
//	}
//};
//
//vector<node> read(){
//	vector<node> cur;
//	int f, d;
//	char ch;
//	while(true){
//		cin >> f >> d;
//		if (d == 0){
//			cur.pb(node(f, -1, 'W'));
//			break;
//		}
//		cin >> ch;
//		cur.pb(node(f, d, ch));
//	}
//	return cur;
//}
//
//vector<node> arr[300];
//
//bool check(int middle){
//	vector<vector<pii> > mas(210);
//	for(int i=0; i< middle; i++){
//		forn(j, sz(arr[i])){
//			int s = arr[i][j].index;
//			int d = arr[i][j].d;
//			int dir = arr[i][j].dir;
//			mas[s].pb(mp(i, j));
//		}
//	}
//	priority_queue<pii> q;
//	forn(i, sz(mas)) q.push(mp(sz(mas[i]), i));
//	vector<bool> used(210);
//	vector<pii> cord(210);
//	forn(i, sz(cord)) cord[i] = mp(-1e+9, -1e+9);
//	while(sz(q)){
//		pii cur = q.top();
//		q.pop();
//		if (used[cur.Y]) continue;
//		used[cur.Y] = true;
//		queue<pii> qqq;
//		cord[cur.Y] = mp(0, 0);
//		qqq.push(cur);
//		while(sz(qqq)){
//			int index = qqq.front().Y;
//			qqq.pop();
//			forn(i, sz(mas[index])){
//				pii in = mas[index][i];
//				int index = arr[in.X][in.Y].index;
//				int d = arr[in.X][in.Y].d;
//				int dir = arr[in.X][in.Y].dir;
//				if (d != -1){
//					int tox = cord[index].X + d * x[dir];
//					int toy = cord[index].Y + d * y[dir];
//					int to1 = arr[in.X][in.Y + 1].index;
//					if (!used[to1]){
//						cord[to1] = mp(tox, toy);
//						used[to1] = true;
//						qqq.push(mp(to1, to1));
//					} else {
//						if (cord[to1] != mp(tox, toy)) return false;
//					}
//				}
//				if (in.Y != 0){
//					int d = -arr[in.X][in.Y - 1].d;
//					int to1 = arr[in.X][in.Y - 1].index;
//					int dir = arr[in.X][in.Y - 1].dir;
//					int tox = cord[index].X + d * x[dir];
//					int toy = cord[index].Y + d * y[dir];
//					if (!used[to1]){
//						cord[to1] = mp(tox, toy);
//						used[to1] = true;
//						qqq.push(mp(to1, to1));
//					}
//					else{
//						if (cord[to1] != mp(tox, toy)) return false;
//					}
//				}
//			}
//		}
//	}
//	return true;
//}
//
//void solve(){
//	int n;
//	cin >> n;
//	forn(i, n){
//		arr[i] = read();
//	}
//	int l = 0, r = n + 1;
//	while(r - l > 1){
//		int middle = (r + l) >> 1;
//		if (check(middle)) l = middle;
//		else r = middle;
//	}
//	cout << l << "\n";
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
//	int n;
//	ios_base::sync_with_stdio(false);
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
