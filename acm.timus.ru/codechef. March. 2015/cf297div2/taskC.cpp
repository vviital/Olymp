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
//const int maxn = 1e+6 + 100;
//int arr[maxn][2];
//
//ll solve(){
//	ll ans = 0;
//	vector<ll> pairs;
//	for(int i=maxn - 1; i >= 1; i--){
//		while(arr[i][1] >= 2) pairs.pb(i), arr[i][1] -= 2;
//		if (arr[i][1] && arr[i][0]) pairs.pb(i), arr[i][1]--, arr[i][0]--;
//		while(arr[i][0] >= 2) pairs.pb(i), arr[i][0] -= 2;
//		if (arr[i][0]) arr[i-1][1]++;
//	}
//	if (sz(pairs) & 1) pairs.pop_back();
//	for(int i=0; i<sz(pairs); i += 2){
//		ans += (ll) pairs[i] * (ll) pairs[i+1];
//	}
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
//	int n;
//	scanf("%d", &n);
//	forn(i, n){
//		int cnt;
//		scanf("%d", &cnt);
//		arr[cnt][0]++;
//	}
//	ll ans = solve();
//	cout << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
