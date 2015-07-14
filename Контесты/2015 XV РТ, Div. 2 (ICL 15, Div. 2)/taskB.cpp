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
//void doh(){
//	cout << "-1\n";
//	exit(0);
//}
//
//int n;
//
//int solve(int f, int s){
//	int last = 0;
//	int first = 0;
//	if (f != n){
//		last++;
//		f--;
//	}
//	if (f == s && f != 1){
//		doh();
//	}
//	if (s == 1){
//		first = f - s;
//		first = first / 3 + first % 3;
//	}
//	else {
//		first = f - (s + 1);
//		first = first / 3 + (first % 3);
//		first++;
//	}
//	return last + first;
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
//	int f, s;
//	cin >> n >> f >> s;
//	if (f == s){
//		doh();
//	}
//	int ans = 0;
//	if (f > s){
//		ans = solve(f, s);
//	}
//	else {
//		f = n - f + 1;
//		s = n - s + 1;
//		ans = solve(f, s);
//	}
//	cout << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}