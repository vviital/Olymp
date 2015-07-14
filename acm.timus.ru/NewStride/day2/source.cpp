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
//struct node{
//	double x, h;
//	int index;
//
//	node(){
//		
//	}
//
//	node(double x, double h, int index){
//		this->x = x;
//		this->h = h;
//		this->index = index;
//	}
//
//	bool operator < (const node &o) const{
//		return x < o.x;
//	}
//};
//
//double mul(node a, node b, node c){
//	pdd v1 = mp(b.x - a.x, b.h - a.h);
//	pdd v2 = mp(c.x - b.x, c.h - b.h);
//	double val = v1.X * (double) v2.Y - v1.Y * (double) v2.X;
//	return val;
//}
//
//int cnt = 0;
//void solve(){
//	printf("Case #%d:\n", ++cnt);
//	int n;
//	scanf("%d", &n);
//	vector<node> p(n), rp(n);
//	forn(i, n) {
//		cin >> p[i].x >> p[i].h;
//		//scanf("%lf%lf", &p[i].x, &p[i].h);
//		p[i].index = i;
//	}
//	forn(i, n) rp[i] = node(-p[i].x, p[i].h, p[i].index);
//	reverse(ALL(rp));
//	int q;
//	scanf("%d", &q);
//	vector<double> ans(q);
//	double res = 0;
//	forn(i, q){
//		double x;
//		//scanf("%lf", &x);
//		cin >> x;
//		p.pb(node(x, 0, i));
//		rp.pb(node(-x, 0, i));
//	}
//	sort(ALL(p));
//	sort(ALL(rp));
//	vector<node> st;
//	forn(i, sz(p)){
//		while(sz(st) >= 2 && mul(st[sz(st) - 2], st.back(), p[i]) >= 0)
//			st.pop_back();
//		st.pb(p[i]);
//		if (!p[i].h){
//			st.pop_back();
//			db cur = atan((p[i].x - st.back().x * 1.) / st.back().h);
//			ans[p[i].index] += cur;
//		}
//	}
//	st.clear();
//	forn(i, sz(rp)){
//		while(sz(st) >= 2 && mul(st[sz(st) - 2], st.back(), rp[i]) >= 0)
//			st.pop_back();
//		st.pb(rp[i]);
//		if (!rp[i].h){
//			st.pop_back();
//			db cur = atan((rp[i].x - st.back().x * 1.) / st.back().h);
//			ans[rp[i].index] += cur;
//		}
//	}
//	//forn(i, sz(ans)) res = max(res, ans[i]);
//	forn(i, sz(ans)) cout << fixed << setprecision(15) << ans[i] / PI * 180 << "\n";
//	//printf("%.15lf\n", res / PI * 180);
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