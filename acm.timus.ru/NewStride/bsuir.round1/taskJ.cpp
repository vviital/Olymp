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
//typedef unsigned long long ll;
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
//char getchar(int val){
//	if (val < 3) return val + '0';
//	if (val <= 5) return val + '1';
//	return val + '2';
//}
//
//ll count(int size){
//	return 1LL << (3 * size);
//}
//
//string query(ll k){
//	int size = 1;
//	ll var = 7;
//	while(var < k) 
//		var *= 8, size++;
//	int per[] = {0, 1, 2, 4, 5, 6, 8, 9};
//	string ans = "";
//	while(k){
//		for(int i = sz(ans) == 0; i < 8; ++i){
//			ll val = i * count(size - 1);
//			if (val <= k && k < (i + 1) * count(size - 1)){
//				ans += per[i] + '0';
//				k -= val;
//			}
//		}
//		size--;
//	}
//	while(size--) ans += '0';
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
//	int t;
//	cin >> t;
//	while(t--){
//		ll n;
//		cin >> n;
//		string ans = query(n);
//		cout << ans << "\n";
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
