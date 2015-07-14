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
//int arr[10][10];
//
//void solve(){
//	forn(i, 9){
//		string s;
//		cin >> s;
//		forn(j, len(s))
//			arr[i][j] = s[j] - '0';
//	}
//	set<int> sq[3][3];
//	set<int> r[9], c[9];
//	bool ok = true;
//	forn(i, 9) forn(j, 9){
//		sq[i / 3][j / 3].insert(arr[i][j]);
//		r[i].insert(arr[i][j]);
//		c[j].insert(arr[i][j]);
//	}
//	forn(i, 3) forn(j, 3){
//		if (sz(sq[i][j]) != 9) ok = false;
//	}
//	forn(i, 9){
//		if (sz(r[i]) != 9 || sz(c[i]) != 9)
//			ok = false;
//	}
//	if (ok)
//		cout << "Valid\n";
//	else
//		cout << "Invalid\n";
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
//	cin >> n;
//	while (n--){
//		solve();
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}