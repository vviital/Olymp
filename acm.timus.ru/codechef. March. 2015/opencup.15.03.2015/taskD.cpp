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
//const int maxn = 1e+5;
//
//vector<int> begs[2 * maxn];
//int endv[2 * maxn];
//int ans[2 * maxn];
//
//int convert(int h, int m, int s){
//	return h * 3600 + m * 60 + s;
//}
//
//void solve(){
//	int n, M, T;
//	scanf("%d%d%d", &n, &M, &T);
//	forn(i, n){
//		int h, m, s;
//		scanf("%d:%d:%d", &h, &m, &s);
//		int val = convert(h, m, s);
//		begs[val].pb(i);
//	}
//	int to = 24 * 60 * 60;
//	int cnt = 0;
//	int mm = 0;
//	int maxm = 0;
//	int last = 0;
//	int lastInd = 0;
//	for(int i=0; i <= to; i++){
//		int current = cnt;
//		if (sz(begs[i])){
//			current += sz(begs[i]);
//			if (current <= M){
//				for(int j=0; j<sz(begs[i]); j++){
//					ans[begs[i][j]] = last = ++mm;
//				}
//				lastInd = i;
//				maxm = max(maxm, current);
//				endv[i + T - 1] += sz(begs[i]);
//			}
//			else {
//				int differens = M - cnt;
//				for(int j=0; j<differens; j++){
//					ans[begs[i][j]] = last = ++mm;
//					lastInd = i;
//				}
//				for(int j=differens; j<sz(begs[i]); j++){
//					ans[begs[i][j]] = last;
//				}
//				if (!differens) {
//					endv[lastInd + T - 1]--;
//					endv[i + T - 1]++;
//					lastInd = i;
//				}
//				endv[i + T - 1] += differens;
//				maxm = current = M;
//			}
//		}
//		cnt = current - endv[i];
//	}
//	if (maxm < M){
//		printf("No solution\n");
//	} else{
//		printf("%d\n", mm);
//		forn(i, n) printf("%d\n", ans[i]);
//	}
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
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
