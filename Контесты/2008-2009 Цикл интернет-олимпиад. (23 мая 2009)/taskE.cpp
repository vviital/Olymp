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
//void doh(int x){
//	cout << x << "\n";
//	exit(0);
//}
//
//int arr[110][110][110];
//int w, h, l, k;
//
//int check(int W, int H, int L){
//	int count = 0;
//	if (W == 0) count++;
//	if (W == w - 1) count++;
//	if (L == 0) count++;
//	if (L == l - 1) count++;
//	if (H == 0) count++;
//	if (H == h - 1) count++;
//	return count;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("painting.in", "r", stdin);
//	freopen("painting.out", "w", stdout);
//#endif
//	cin >> w >> h >> l >> k;
//	int ans = 0;
//	forn(W, w) forn(H, h) forn(L, l)
//		if (check(W, H, L) == k)
//			ans++;
//	cout << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}