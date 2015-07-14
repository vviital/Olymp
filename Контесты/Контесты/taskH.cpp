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
//const int maxn = 5000 + 100;
//int dp[maxn][maxn];
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("message.in", "r", stdin);
//	freopen("message.out", "w", stdout);
//#endif
//	int k;
//	cin >> k;
//	string s;
//	cin >> s;
//	for (int i = 0; i < len(s); i++){
//		dp[i][i] = 1;
//	}
//	for (int l = 1; l < len(s); l++){
//		for (int i = 0; i < len(s); i++){
//			if (i + l >= len(s)) continue;
//			int j = i + l;
//			dp[i][j] = max(dp[i][j], dp[i + 1][j - 1] + 2 * (s[i] == s[j]));
//			dp[i][j] = max(dp[i][j], dp[i + 1][j]);
//			dp[i][j] = max(dp[i][j], dp[i][j - 1]);
//		}
//	}
//	int best = 0;
//	pii ans;
//	for (int i = 0; i < len(s); i++)
//		for (int j = i; j < len(s); j++){
//			int l = j - i + 1 - k;
//			if (dp[i][j] - l < 0) continue;
//			if (dp[i][j] > best){
//				best = dp[i][j];
//				ans = mp(i + 1, j + 1);
//			}
//			if (dp[i][j] == best){
//				if (j - i > ans.Y - ans.X){
//					ans.X = i + 1;
//					ans.Y = j + 1;
//				}
//			}
//		}
//	cout << ans.X << " " << ans.Y << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}