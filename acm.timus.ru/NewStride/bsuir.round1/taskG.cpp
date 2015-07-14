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
//int n, m;
//const int maxn = 2e+5;
//
//int let[maxn];
//vector<int> arr;
//
//void add(int i){
//	int to = i + m;
//	if (to < n) let[arr[to]]++;
//}
//
//void del(int i){
//	int to = i - m;
//	if (to >= 0) let[arr[to]]--;
//}
//
//ll solve(){
//	ll ans = 0;
//	for(int i=0; i < min(m, n); i++) let[arr[i]]++;
//	int addvalue = 0;
//	forn(i, n){
//		add(i);
//		int f = max(0, i - m);
//		int t = min(n - 1, i + m);
//		int size = t - f + 1;
//		ll val = let[arr[i]];
//		if (val >= 2) addvalue = 1;
//		ans += size - val;
//		del(i);
//	}
//	ans /= 2;
//	ans += addvalue;
//	return ans;
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
//	scanf("%d%d", &n, &m);
//	arr.resize(n);
//	forn(i, n) scanf("%d", &arr[i]);
//	cout << solve() << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
