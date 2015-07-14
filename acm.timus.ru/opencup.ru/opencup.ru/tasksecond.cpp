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
//typedef long double db;
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
//#define pdd pair<long double, long double>
//
//long double dp[20][150][150][20];
//
//int c[20], f[20];
//pii val[20][20];
//int n;
//
//int parseS(string &s, int pos){
//	int val = 0;
//	for(int i=pos; i < sz(s); i++) val = val * 10 + s[i] - '0';
//	return val;
//}
//
//pii parse(string &s){
//	if (s[0] == '+') return mp(parseS(s, 1), 1);
//	return mp(parseS(s, 0), 0);
//}
//
//long double dp1[20][150];
//long double sumdp[20][150];
//long double answer[150][30];
//
//long double eps = 1e-9;
//
//int cmp(long double a, long double b){
//	if (fabs(a - b) < eps) return 0;
//	if (a < b) return -1;
//	return 1;
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
//	ms(dp);
//	cin >> n;
//	forn(i, n){
//		cin >> c[i] >> f[i];
//		forn(j, f[i]){
//			string cur;
//			cin >> cur;
//			val[i][j] = parse(cur);
//		}
//	}
//	forn(iter, n) dp[iter][0][0][0] = 1;
//	forn(iter, n){
//		forn(i, 125) forn(j, 125) forn(k, c[iter] + 1){
//			forn(step, f[iter]){
//				pii vall = val[iter][step];
//				int to = i + vall.X;
//				if (to >= 130) continue;
//				if (vall.Y == 1){
//					dp[iter][to][j + 1][k] += dp[iter][i][j][k] * 1. / f[iter];
//				} else {
//					dp[iter][to][j][k+1] += dp[iter][i][j][k] * 1. / f[iter];
//				}
//			}
//		}
//	}
//
//	forn(iter, n){
//		forn(i, 125){
//			forn(j, 125){
//				dp1[iter][i] += dp[iter][i][j][c[iter]];
//			}
//		}
//	}
//	forn(iter, n){
//		forn(i, 125){
//			if (i == 0) sumdp[iter][i] = dp1[iter][0];
//			else sumdp[iter][i] = sumdp[iter][i - 1] + dp1[iter][i];
//		}
//	}
//	int k;
//	cin >> k;
//	for(int i=1; i<=k; i++){
//		int ans = 0;
//		long double pred = 0;
//		forn(iter, n){
//			long double cur = 1. - sumdp[iter][i];
//			if (cur > pred){
//				pred = cur;
//				ans = iter;
//			}
//		}
//		cout << ans + 1 << "\n";
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
