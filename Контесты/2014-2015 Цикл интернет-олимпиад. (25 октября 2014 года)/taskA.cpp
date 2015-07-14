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
//const int maxn = 1e+4 + 100;
//int dp[maxn][5];
//int arr[maxn][5];
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("run.in", "r", stdin);
//	freopen("run.out", "w", stdout);
//#endif
//	int n;
//	cin >> n;
//	for (int i = 0; i < 5; i++){
//		for (int j = 0; j < maxn; j++)
//			dp[j][i] = -1e+9;
//	}
//	for (int i = 1; i <= n; i++){
//		string s;
//		cin >> s;
//		for (int j = 0; j < 3; j++){
//			if (s[j] == 'W'){
//				arr[i][j] = -1;
//			}
//			if (s[j] == 'C'){
//				arr[i][j] = 1;
//			}
//		}
//	}
//	dp[0][1] = 0;
//	for (int i = 1; i <= n; i++){
//		for (int j = 0; j < 3; j++){
//			if (arr[i][j] == -1) continue;
//			for (int iter = -1; iter <= 1; iter++){
//				if (j + iter >= 3 || j + iter < 0) continue;
//				dp[i][j] = max(dp[i][j], dp[i - 1][j + iter] + arr[i][j]);
//			}
//		}
//	}
//	int best = -1e+9;
//	for (int i = 0; i <= n; i++){
//		for (int j = 0; j < 3; j++){
//			best = max(best, dp[i][j]);
//		}
//	}
//	cout << best << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}