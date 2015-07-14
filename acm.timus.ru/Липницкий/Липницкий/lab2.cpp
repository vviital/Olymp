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
//ll getrev(ll a, ll b){
//	ll x1 = 1, y1 = 0;
//	ll x2 = 0, y2 = 1;
//
//	ll mod = b;
//
//	while(b){
//		ll q = a / b;
//		a = a - b * q;
//		swap(a, b);
//
//		x1 = x1 - x2 * q;
//		swap(x1, x2);
//
//		y1 = y1 - y2 * q;
//		swap(y1, y2);
//	}
//
//	return ((x1 + mod) % mod + mod) % mod;
//}
//
//bool check(ll x, ll y, ll n){
//	if ((13 * x + 5 * y - 11) % n == 0)
//		if ((7 * x + 11 * y - 13) % n == 0)
//			return true;
//	return false;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	freopen("output1.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	int N;
//	set<pii> ans;
//	cin >> N;
//	forn(x, N)
//		forn(y, N){
//			if (check(x, y, N)) ans.insert(mp(x, y));
//	}
//	for(set<pii>::iterator it = ans.begin(); it != ans.end(); it++){
//		pii cur = (*it);
//		cout << cur.X << " " << cur.Y << "\n";
//	}
//	return 0;
//	ll m;
//	cin >> m;
//	ll z1 = 5, z2 = 6, z3 = 7;
//	z1 = getrev(z1, m);
//	z2 = getrev(z2, m);
//	z3 = getrev(z3, m);
//	cout << z1 << "\n";
//	cout << z2 << "\n";
//	cout << z3 << "\n";
//	return 0;
//	int n;
//	set<pii> mm;
//	cin >> n;
//	forn(i, n) {
//		forn(j, n){
//			int val = i * j % n;
//			if (val == 1) {
//				mm.insert(mp(min(i, j), max(i,j)));
//			}
//		}
//	}
//	for(set<pii>::iterator it = mm.begin(); it != mm.end(); it++){
//		cout << (*it).X << " " << (*it).Y << "\n";
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
