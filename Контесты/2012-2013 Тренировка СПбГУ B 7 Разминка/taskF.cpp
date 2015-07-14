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
//const int mod = 1e+9 + 7;
//const int maxn = 1010;
//ll d[maxn][maxn];
//
//ll dist(ll a, ll b){
//	if (a == b) return 0;
//	return b * a * a + a * b * b;
//}
//
//ll stress(int n){
//	forn(i, n) forn(j, n) d[i][j] = dist(i + 1, j + 1);
//	forn(k, 1) forn(i, n) forn(j, n){
//		d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//	}
//	ll ans = 0;
//	forn(i, n) forn(j, n) ans = (ans + d[i][j]) % mod;
//	return ans;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("floyd_joke.in", "r", stdin);
//	freopen("floyd_joke.out", "w", stdout);
//#endif
//	int n;
//	cin >> n;
//	cout << stress(n) << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}