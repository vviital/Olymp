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
//map<int, int> mm;
//
//void solve(vector<int> arr){
//	forn(i, sz(arr)){
//		ll cur = arr[i];
//		for(ll j = 2; j * j <= arr[i]; j++){
//			if (cur % j == 0){
//				int cnt = 0;
//				while(cur % j == 0) cnt++, cur /= j;
//				mm[j] += cnt;
//			}
//		}
//		if (cur != 1) mm[cur]++;
//	}
//	ll ans = 1;
//	for(map<int, int>::iterator it = mm.begin(); it != mm.end(); ++it){
//		if ((*it).X == 1) continue;
//		ans = ans * ((*it).Y + 1);
//	}
//	cout << ans << "\n";
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
//	forn(i, n){
//		scanf("%d", &arr[i]);
//	}
//	solve(arr);
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
