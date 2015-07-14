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
//const int maxn = 100;
//int sum[maxn][maxn];
//int arr[maxn][maxn];
//
//int getsum(int fi, int fj, int ti, int tj){
//	return sum[ti][tj] - sum[fi - 1][tj] - sum[ti][fj - 1] + sum[fi - 1][fj - 1];
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("coins.in", "r", stdin);
//	freopen("coins.out", "w", stdout);
//#endif
//	int n, m, k;
//	cin >> n >> m >> k;
//	forn(iter, n){
//		string s;
//		cin >> s;
//		forn(i, len(s)) arr[iter + 1][i + 1] = s[i] == 'o';
//	}
//	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++){
//		sum[i][j] += arr[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
//	}
//	int best = 10000;
//	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++){
//		for (int ii = i; ii <= n; ii++) for (int jj = j; jj <= m; jj++){
//			if (getsum(i, j, ii, jj) == k){
//				int cur = i - 1 + n - ii + min(i - 1, n - ii);
//				cur += j - 1 + m - jj + min(j - 1, m - jj);
//				best = min(best, cur);
//			}
//		}
//	}
//	if (best == 10000){
//		best = -1;
//	}
//	cout << best << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}