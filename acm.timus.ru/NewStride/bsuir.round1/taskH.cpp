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
//bool ok = false;
//vector<ll> arr;
//ll lim = 1021 * (ll) 1031 * (ll) 1033;
//
//void rec(int cur, ll val, int was){
//	if (val == lim) {
//		ok = true;
//		return;
//	}
//	if (cur == sz(arr)) return;
//	if (was >= 3) return;
//	rec(cur + 1, val * arr[cur], was + 1);
//	rec(cur + 1, val, was);
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
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	set<ll> cond;
//	vector<ll> per;
//	per.pb(1021);			//0
//	per.pb(1031);			//1
//	per.pb(1033);			//2
//	per.pb(1021 * 1031);	//3
//	per.pb(1021 * 1033);	//4
//	per.pb(1031 * 1033);    //5
//	per.pb(1021 * (ll) 1031 * (ll) 1033); //6
//	forn(i, n){
//		ll cur;
//		cin >> cur;
//		forn(j, sz(per))
//			if (cur == per[j])
//				cond.insert(cur);
//	}
//	for(set<ll>::iterator it = cond.begin(); it != cond.end(); ++it){
//		arr.pb(*it);
//	}
//	if (sz(arr) == 0){
//		ok = false;
//	} else {
//		if (arr.back() == per.back())
//			ok = true;
//		else
//			rec(0, 1, 0);
//	}
//	if (ok)
//		cout << "YES\n";
//	else
//		cout << "NO\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
