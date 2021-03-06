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
//string yes = "LCG";
//string no = "Xorshift";
//
//vector<pair<ll, int> > ss;
//unsigned x = 0;
//
//unsigned getnext(){
//	x = x * 1103515245 + 12345;
//	return (x >> 16) & 32767;
//}
//
//bool get(unsigned value){
//	int to = 33;
//	ll val = 0;
//	for(int i=0; i<to; i++){
//		unsigned cur = getnext() & 1;
//		val = val * 2 + cur;
//		ss.pb(mp(val, i + 1));
//	}
//	return true;
//}
//
//void solve(){
//	string s;
//	cin >> s;
//	int to = min(33, sz(s));
//	ll value = 0;
//	for(int i=0; i<to; i++){
//		value = value * 2 + s[i] - '0';
//	}
//	bool ok = false;
//	int index = lower_bound(ALL(ss),(mp(value, to))) - ss.begin();
//	if (index != sz(ss) && ss[index] == mp(value, to)) ok = true;
//	if (ok) cout << yes;
//	else cout << no;
//	cout << "\n";
//}
//
//void precalc(){
//	int bound = 1 << 17;
//	for(int i=0; i <= bound; ++i)
//		get(i);
//	sort(ALL(ss));
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
//	ios_base::sync_with_stdio(false);
//	cin >> t;
//	precalc();
//	while(t--) solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
