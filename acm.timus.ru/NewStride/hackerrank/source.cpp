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
//
//const int maxn = 1e+5 + 100;
//
//vector<int> getdivs(int n){
//	vector<int> ans;
//	for(int i = 1; i * i <= n; ++i){
//		if (n % i == 0){
//			int cond1 = i;
//			int cond2 = n / i;
//			ans.pb(cond1);
//			if (cond1 != cond2) ans.pb(cond2);
//		}
//	}
//	return ans;
//}
//
//vector<int> divs[maxn];
//ll ans[maxn];
//
//void calc(){
//	forn(i, maxn){
//		ll curans = 0;
//		int begg = 0;
//		for(int j = 1; j < sz(divs[i]); ++j){
//			if (divs[i][j] == divs[i][j - 1] + 1) continue;
//			ll length = j - begg;
//			ans[i] += length * (length + 1) / 2;
//			begg = j;
//		}
//		ll length = sz(divs[i]) - begg;
//		ans[i] += length * (length + 1) / 2;
//	}
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
//	vector<int> arr(n);
//	forn(i, n) {
//		scanf("%d", &arr[i]);
//		vector<int> cur = getdivs(arr[i]);
//		forn(j, sz(cur)){
//			divs[cur[j]].pb(i);
//		}
//	}
//	calc();
//	int q;
//	scanf("%d", &q);
//	while(q--){
//		int k;
//		scanf("%d", &k);
//		printf("%lld\n", ans[k]);
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
