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
//const int maxn = 110;
//int dp[110][110][110];
// 
//int jumpa[1000];
//int jumpb[1000];
//int jumpc[1000];
// 
//int main(){
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//#else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
//    int A, B, C, k;
//    cin >> A >> B >> C >> k;
//    int maxx = A + B + B + C + C + C;
//    if (k > maxx){
//        cout << 0 << "\n";
//        return 0;
//    }
//    int cnt = 0;
//    forn(a, A + 1) forn(b, B + 1) forn(c, C + 1){
//        int val = a + b + b + c + c + c;
//        if (val > k + 2) break;
//        if (val == k){
//            jumpa[cnt] = a;
//            jumpb[cnt] = b;
//            jumpc[cnt++] = c;
//        } else {
//			if (val == k + 1 && !a){
//				 jumpa[cnt] = a;
//				jumpb[cnt] = b;
//				jumpc[cnt++] = c;
//			} else {
//				if (val == k + 2 && a < 2 && !b){
//					 jumpa[cnt] = a;
//				jumpb[cnt] = b;
//				jumpc[cnt++] = c;
//				}
//			}
//		}
//        }
//    dp[A][B][C] = 0;
//    int toa, tob, toc;
//	int ccc = 0;
//    for(int a=A; a >= 0; a--) for(int b = B; b >= 0; b--) for(int c = C; c >= 0; c--){
//		ccc++;
//        if (dp[a][b][c] == 0 && ccc != 1) continue;
//		if (a + (b << 1) + 3 * c < k) break;
//        forn(i, cnt){
//            toa = a - jumpa[i];
//            tob = b - jumpb[i];
//            toc = c - jumpc[i];
//            if (toa >= 0 && tob >= 0 && toc >= 0){
//                dp[toa][tob][toc] = dp[toa][tob][toc] < dp[a][b][c] + 1 ? dp[a][b][c] + 1 : dp[toa][tob][toc];
//            }
//        }
//    }
//    int ans = 0;
//    forn(a, A + 1) forn(b, B + 1) forn(c, C + 1) ans = ans < dp[a][b][c] ? dp[a][b][c] : ans;
//    cout << ans << "\n";
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//    return 0;
//}