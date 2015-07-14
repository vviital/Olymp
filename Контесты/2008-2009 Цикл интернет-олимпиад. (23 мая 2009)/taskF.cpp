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
//int n;
//vector<int> d;
//vector<int> z;
//int s, t;
//int c1, c2, c3, R;
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("railway.in", "r", stdin);
//	freopen("railway.out", "w", stdout);
//#endif
//	cin >> n;
//	d.resize(n + 1), z.resize(n + 1);
//	for (int i = 1; i <= n; i++) cin >> d[i];
//	for (int i = 1; i <= n; i++) cin >> z[i];
//	cin >> s >> t;
//	cin >> c1 >> c2 >> c3 >> R;
//	int cost1 = 0;
//	int cost2 = 0;
//	int dz = abs(z[s] - z[t]);
//	if (dz == 0)
//		cost1 = c1;
//	else
//		cost1 = dz * c1;
//	int dd = abs(d[s] - d[t]);
//	if (dd < R)
//		cost2 = dd * c2;
//	else
//		cost2 = dd * c3;
//	cout << cost1 << "\n" << cost2 << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}