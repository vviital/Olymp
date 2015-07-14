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
//ll stupid(ll a, ll b){
//	for (ll i = 0; i < b; i++){
//		a += a % 10;
//	}
//	return a;
//}
//
//
//ll smart(ll n, ll k){
//	ll ans = n - n % 10;
//	n %= 10;
//	n = stupid(n, min(10000LL, k));
//	k -= min(10000LL, k);
//	if (k == 0)
//		return ans + n;
//	ll beg = n % 10;
//	ll cur = n % 10;
//	ll nn = n;
//	ll add = 0;
//	ll count = 0;
//	do{
//		nn += nn % 10;
//		cur = nn % 10;
//		add += nn % 10;
//		count++;
//	} while (cur != beg);
//	n += add * (k / count);
//	n = stupid(n, k % count);
//	return ans + n;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("blackboard.in", "r", stdin);
//	freopen("blackboard.out", "w", stdout);
//#endif
//	ll n, k;
//	cin >> n >> k;
//	cout << smart(n, k) << "\n";
//	//cout << stupid(n, k) << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}