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
//const int maxn = 1e+6;
//
//ll sum[maxn];
//
//ll convert(int h, int m, int s){
//	return h * 1000000LL * 1000000LL + m * 1000000LL + s;
//}
//
//ll getsum(int i){
//	return i < 0 ? 0 : sum[i];
//}
//
//ll getsum(int i, int j){
//	return i > j ? 0 : getsum(j) - getsum(i - 1);
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);*/
//#endif
//	int n;
//	vector<ll> t;
//	scanf("%d", &n);
//	forn(i, n){
//		int h, m, s;
//		scanf("%d%d%d", &h, &m, &s);
//		t.push_back(convert(h, m, s));
//	}
//	sort(ALL(t));
//	for (int i = 0; i < n; i++){
//		sum[i] = i == 0 ? t[i] : sum[i - 1] + t[i];
//	}
//	ll best = 1e+18;
//	for (int i = 0; i < sz(t); i++){
//		ll cur = 0;
//		ll left = max(0LL, t[i] * (i) - getsum(0, i - 1));
//		int last = sz(t) - i;
//		ll right = t[i] * (last - 1) + max(0LL, 12 * 1000000LL * 1000000LL * (last - 1) - getsum(i + 1, sz(t) - 1));
//		cur = left + right;
//		best = min(best, cur);
//	}
//	int h = best / 1000000LL / 1000000LL;
//	best %= 1000000LL * 1000000LL;
//	int m = best / 1000000LL;
//	int s = best % 1000000LL;
//	printf("%d %d %d\n", h, m, s);
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}