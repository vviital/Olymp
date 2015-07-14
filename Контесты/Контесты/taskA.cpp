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
//ll mod = 1e+9 + 7;
//
//ll binpow(ll x, ll p){
//	ll ans = 1;
//	ll mul = x;
//	while (p){
//		if (p & 1){
//			ans = ans * mul % mod;
//		}
//		mul = mul * mul % mod;
//		p >>= 1;
//	}
//	return ans;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("number.in", "r", stdin);
//	freopen("number.out", "w", stdout);
//#endif
//	ll k;
//	cin >> k;
//	ll pow = 27 + (k - 1) * 28;
//	ll ans = binpow(10, pow);
//	ans = ans * 6 % mod;
//	ans = (ans + mod - 18) % mod;
//	ans = ans * binpow(29, mod - 2) % mod;
//	ans = (ans * 10 + 6) % mod;
//	cout << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}