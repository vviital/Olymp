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
//const int maxn = 100;
//
//struct num{
//	double peo[maxn];
//
//	num(){
//		forn(i, maxn) peo[i] = 0;
//	}
//
//	double count(){
//		double all = 0;
//		forn(i, maxn) all += peo[i];
//		double ans = 0;
//		forn(i, maxn) ans += i * peo[i] / all;
//		return ans;
//	}
//};
//
//num arr[maxn];
//const int lim = 12;
//double val[maxn];
//
//void update(int cur, int maxval){
//	if (cur < maxval) return;
//	double mm = 0, cnt = 0;
//	forn(i, lim) mm = max(mm, val[i]);
//	forn(i, lim) 
//		if (mm == val[i]) 
//			cnt++;
//	arr[cur + 1].peo[(int)cnt]++;
//}
//
//inline void rec(int cur, int last, int maxval){
//	if (cur == lim) return;
//	forn(i, lim){
//		if (i == last) continue;
//		val[i]++;
//		maxval = max(maxval, i);
//		update(cur, maxval);
//		rec(cur + 1, i, maxval);
//		val[i]--;
//	}
//}
//
//void print(double val){
//	cout << fixed << setprecision(6) << val << "\n";
//}
//
//int main(){
//#ifndef _DEBUG
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	rec(0, -1, -1);
//	/*int t;
//	cin >> t;
//	while(t--){
//		int ind;
//		cin >> ind;
//		print(arr[ind].count());
//	}
//	return 0;*/
//	for(int i=1; i <= lim; ++i){
//		for(int j = 1; j < lim; ++j)
//			cout << (ll)arr[i].peo[j] << "\t\t";
//		cout << "\n";
//		double val = arr[i].count();
//		print(val);
//	}
//#ifndef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
