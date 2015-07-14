//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <iomanip>
//#include <string>
//#include <algorithm>
//#include <cmath>
//#include <ctime>
//#include <queue>
//#include <set>
//#include <map>
//#include <assert.h>
//#include <cstdlib>
//#include <bitset>
//#include <stack>
//
//using namespace std;
//
//typedef long long ll;
//typedef double db;
//
//#define mp(a,b) make_pair(a, b)
//#define pb(a) push_back(a)
//#define forn(i, n) for(int i = 0; i < n; ++i)
//#define ALL(a) a.begin(), a.end()
//#define X first
//#define Y second
//#define sz(a) ( (int) a.size() )
//#define len(a) ( (int) a.length() )
//#define pii pair<int, int>
//
//int getSum(int n){
//	return n * (n + 1) * (2 * n + 1) / 6;
//}
//
//int getOdd(int n){
//	n = (n + 1) / 2;
//	return n * (4 * n * n - 1) / 3;
//}
//
//int getEven(int n){
//	return getSum(n) - getOdd(n - 1);
//}
//
//map<int, pii> mm;
//
//vector<int> getP(){
//	vector<int> ans;
//	ans.pb(0);
//	for(int i = 2; i <= 300; i++){
//		ans.pb(getSum(i));
//		if (ans.back() <= 1e+6 + 10)
//			mm[ans.back()] = mp(i, 1);
//		if (i & 1){
//			ans.pb(getOdd(i));
//			if (ans.back() <= 1e+6 + 10)
//				mm[ans.back()] = mp(i, 0);
//		}
//		else
//			if (i != 2){
//				ans.pb(getEven(i));
//				if (ans.back() <= 1e+6 + 10)
//					mm[ans.back()] = mp(i, 0);
//			}
//	}
//	sort(ALL(ans));
//	while(ans.back() > 1e+6 + 10) ans.pop_back();
//	return ans;
//}
//
//const int maxn = 1e+6 + 100;
//
//int T = 0;
//
//unsigned char dp[325][maxn];
//vector<int> p;
//
//void solve(int n){
//	printf("Case %d: ", ++T);
//	vector<int> p = ::p;
//	while(p.back() > n) p.pop_back();
//	if (dp[sz(p) - 1][n] < 254){
//		pii cur = mp(sz(p) - 1, n);
//		vector<int> ans;
//		while(cur.Y){
//			int to = cur.Y - p[cur.X];
//			if (to >= 0 && dp[cur.X - 1][to] + 1 == dp[cur.X][cur.Y]){
//				cur.Y -= p[cur.X];
//				ans.pb(p[cur.X]);
//			}
//			cur.X--;
//			/*for(int iter = sz(p) - 1; iter >= 0; iter--){
//				int to = cur.Y - p[iter];
//				if (to < 0) continue;
//				if (dp[cur.X - 1][to] + 1 == dp[cur.X][cur.Y]){
//					cur.Y -= p[iter];
//					ans.pb(p[iter]);
//					break;
//				}
//			}
//			cur.X--;*/
//		}
//		vector<pii> res;
//		sort(ALL(ans));
//		reverse(ALL(ans));
//		forn(iter, sz(ans)){
//			res.pb(mm[ans[iter]]);
//		}
//		forn(iter, sz(res)) {
//			printf("%d",res[iter].X);
//			if (res[iter].Y == 1) printf("H ");
//			else printf("L ");
//		}
//	} else {
//		cout << "impossible";
//	}
//	cout << "\n";
//}
//
//void precalc(){
//	int n = maxn - 1;
//	forn(i, 325) forn(j, maxn) dp[i][j] = 254;
//	dp[0][0] = 0;
//	p =  getP();
//	for(int iter = 1; iter < sz(p); iter++){
//		forn(i, n + 1){
//			int to = i + p[iter];
//			dp[iter][i] = min(dp[iter][i], dp[iter - 1][i]);
//			if (to <= n) dp[iter][to] = min(dp[iter][to], (unsigned char)(dp[iter - 1][i] + 1));
//		}
//	}
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#endif
//	/*ifstream in("in.txt");
//	string s1, s2;
//	forn(iter, 202){
//		getline(cin, s1);
//		getline(in, s2);
//		while(s1[len(s1) - 1] == ' ') s1.pop_back();
//		while(s2[len(s2) - 1] == ' ') s2.pop_back();
//		if (s1 != s2){
//			cerr << s1 << "\n" << s2 << "\n";
//		}
//	}
//	return 0;*/
//	precalc();
//	while(true){
//		int n;
//		cin >> n;
//		if (n == 0) break;
//		solve(n);
//	}
//	return 0;
//}