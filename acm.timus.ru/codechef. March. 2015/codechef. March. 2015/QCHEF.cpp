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
//#define ms2(x) memset(x, 127, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pdd pair<double, double>
//
//struct node{
//	int l, r, index;
//
//	node() { }
//
//	node(int l, int r, int index){
//		this->l = l;
//		this->r = r;
//		this->index = index;
//	}
//
//	bool operator < (const node &o) const{
//		return r < o.r;
//	}
//};
//
//const int maxn = 1e+5 + 100;
//const int blocksize = 300;
//
//int n, m, k;
//int curans = 0;
//int curl, curr;
//vector<node> q[1000];
//int l[maxn], r[maxn];
//int arr[maxn];
//vector<pair<int*, pii> > mem;
//
//void shift_rigth(){
//	int val = arr[curr];
//	if (l[val] == -1){
//		mem.pb(mp(&l[val], mp(l[val], curans)));
//		l[val] = curr;
//	}
//	mem.pb(mp(&r[val], mp(r[val], curans)));
//	r[val] = curr;
//	curans = max(curans, r[val] - l[val]);
//}
//
//void shift_left(){
//	int val = arr[curl];
//	if (r[val] == -1){
//		mem.pb(mp(&r[val], mp(r[val], curans)));
//		r[val] = curl;
//	}
//	mem.pb(mp(&l[val], mp(l[val], curans)));
//	l[val] = curl;
//	curans = max(curans, r[val] - l[val]);
//}
//
//void roll_back(int count){
//	while(sz(mem) > count){
//		pair<int*, pii> cnt = mem.back();
//		*cnt.X = cnt.Y.X;
//		curans = cnt.Y.Y;
//		mem.pop_back();
//	}
//}
//
//void solve(){
//	forn(i, 1000)
//		sort(ALL(q[i]));
//	vector<int> ans(k);
//	ms1(l), ms1(r);
//	forn(i, 1000){
//		forn(j, sz(q[i])){
//			int size = q[i][j].r - q[i][j].l;
//			if (size < blocksize){
//				curr = q[i][j].l;
//				for(; curr <= q[i][j].r; ++curr){
//					shift_rigth();
//				}
//				ans[q[i][j].index] = curans;
//				roll_back(0);
//			}
//		}
//	}
//	forn(i, 1000){
//		curr = (i + 1) * blocksize;
//		forn(j, sz(q[i])){
//			int size = q[i][j].r - q[i][j].l;
//			if (size >= blocksize){
//				for(; curr <= q[i][j].r; ++curr){
//					shift_rigth();
//				}
//				int cursize = sz(mem);
//				curl = (i + 1) * blocksize - 1;
//				for(; curl >= q[i][j].l; --curl){
//					shift_left();
//				}
//				ans[q[i][j].index] = curans;
//				roll_back(cursize);
//			}
//		}
//		roll_back(0);
//	}
//	forn(i, sz(ans))
//		cout << ans[i] << "\n";
//		//printf("%d\n", ans[i]);
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);*/
//#endif
//	ios_base::sync_with_stdio(false);
//	cin >> n >> m >> k;
//	//scanf("%d%d%d", &n, &m, &k);
//	forn(i, n)
//		cin >> arr[i];
//		//scanf("%d", &arr[i]);
//	forn(i, k){
//		int l, r;
//		cin >> l >> r;
//		//scanf("%d%d", &l, &r);
//		l--, r--;
//		int block = l / blocksize;
//		q[block].pb(node(l, r, i));
//	}
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
