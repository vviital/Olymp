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
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("basketball.in", "r", stdin);
//	freopen("basketball.out", "w", stdout);
//#endif
//	int n;
//	cin >> n;
//	map<string, int> mm;
//	forn(i, n){
//		string s;
//		cin >> s;
//		mm[s] = 0;
//	}
//	int m;
//	cin >> m;
//	int X1 = 0, X2 = 0;
//	for (int i = 0; i < m; i++){
//		int x1, x2;
//		scanf("%d:%d", &x1, &x2);
//		string s;
//		cin >> s;
//		int dif = x1 - X1 + x2 - X2;
//		X1 = x1;
//		X2 = x2;
//		mm[s] += dif;
//	}
//	string ans;
//	int value = 0;
//	for (map<string, int> ::iterator it = mm.begin(); it != mm.end(); ++it){
//		if ((*it).Y > value)
//			ans = (*it).X, value = (*it).Y;
//	}
//	cout << ans << " " << value << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}