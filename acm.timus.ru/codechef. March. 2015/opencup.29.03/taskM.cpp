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
//vector<int> zip(vector<string> &s, map<string, int> &mm){
//	vector<int> ans(sz(s));
//	forn(i, sz(s)){
//		ans[i] = mm[s[i]];
//	}
//	return ans;
//}
//
//void solve(){
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	map<string, int> mm;
//	vector<string> f(n), s(n);
//	vector<int> a(n), b(n);
//	forn(i, n){
//		cin >> f[i];
//		a[i] = i;
//		mm[f[i]] = i;
//	}
//	forn(i, n){
//		cin >> s[i];
//	}
//	b = zip(s, mm);
//	vector<int> ans;
//	vector<int> l(sz(a)), r(sz(b));
//	int szl = 0, szr = 0;
//	int curans = 0;
//	for(int i=0; i<sz(a); i++){
//		curans++;
//		if (a[i] != b[i]){
//			if (r[a[i]]){
//				r[a[i]] = 0;
//				szr--;
//			} else {
//				l[a[i]] = 1;
//				szl++;
//			}
//			if (l[b[i]]){
//				l[b[i]] = 0;
//				szl--;
//			} else {
//				r[b[i]] = 1;
//				szr++;
//			}
//		}
//		if (szl == 0 && szr == 0){
//			ans.pb(curans);
//			curans = 0;
//		}
//	}
//	forn(i, sz(ans)){
//		cout << ans[i] << "\n";
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
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
