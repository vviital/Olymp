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
//vector<pair<char, int> > query;
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	ios_base::sync_with_stdio(false);
//	int W, H, n;
//	cin >> W >> H >> n;
//	set<int> ww, hh;
//	forn(i, n){
//		char ch;
//		int q;
//		cin >> ch >> q;
//		if (ch == 'H') hh.insert(q);
//		else ww.insert(q);
//		query.pb(mp(ch, q));
//	}
//	ww.insert(0), ww.insert(W);
//	hh.insert(0), hh.insert(H);
//	ll Hmax = 0, Wmax = 0;
//	int last = 0;
//	for(set<int>::iterator it = hh.begin(); it != hh.end(); it++){
//		Hmax = max(Hmax, (ll)(*it) - last);
//		last = *it;
//	}
//	last = 0;
//	for(set<int>::iterator it = ww.begin(); it != ww.end(); it++){
//		Wmax = max(Wmax, (ll)(*it) - last);
//		last = *it;
//	}
//	vector<ll> ans(sz(query));
//	reverse(ALL(query));
//	forn(i, sz(query)){
//		ans[i] = Hmax * Wmax;
//		set<int>::iterator l, r;
//		if (query[i].X == 'H'){
//			l = hh.find(query[i].Y);
//			r = l;
//			l--, r++;
//			Hmax = max(Hmax, (ll)(*r) - (*l));
//			hh.erase(query[i].Y);
//		} else {
//			l = ww.find(query[i].Y);
//			r = l;
//			l--, r++;
//			Wmax = max(Wmax, (ll)(*r) - (*l));
//			ww.erase(query[i].Y);
//		}
//	}
//	reverse(ALL(ans));
//	forn(i, sz(ans)){
//		cout << ans[i] << "\n";
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
