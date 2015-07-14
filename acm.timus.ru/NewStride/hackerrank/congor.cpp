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
//#define e 2.7182818284590452353602874713527
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
//long double fact[maxn];
//
//long double ln(double x){
//	return log(x) / log(e);
//}
//
//void precalc(){
//	fact[0] = fact[1] = ln(1);
//	for(int i = 2; i < maxn; ++i){
//		fact[i] = fact[i - 1] + ln(i);
//	}
//}
//
//long double comb(int n, int k){
//	return fact[n] - fact[k] - fact[n - k];
//}
//
//void solve(){
//	int n;
//	scanf("%d", &n);
//	vector<pair<double, pii> > ans;
//	vector<int> comb(n + 1);
//	for(int i = 0; i <= (n + 1) / 2; ++i){
//		comb[i] = comb[n - i] = i;
//	}
//	for(int x = 0; x <= n; x++){
//		int y = n - x;
//		double prob = comb[x];
//		ans.pb(mp(prob, mp(x, y)));
//	}
//	sort(ALL(ans));
//	forn(i, sz(ans)) printf("%d %d\n", ans[i].Y.X, ans[i].Y.Y);
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
//	int t;
//	precalc();
//	scanf("%d", &t);
//	while(t--) solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
