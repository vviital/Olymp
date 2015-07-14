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
//const int mod = 1e+9 + 7;
//const int maxn = 60000;
//vector<int> g[maxn];
//int mark[maxn];
//bool used[maxn];
//bool can = true;
//
//void dfs(int cur, int color){
//	mark[cur] = color;
//	used[cur] = true;
//	forn(i, sz(g[cur])){
//		int to = g[cur][i];
//		if (!used[to] && (mark[to] == color || !mark[to])){
//			dfs(to, color);
//		}
//		else {
//			if (mark[to] != color){
//				can = false;
//			}
//		}
//	}
//}
//
//void solve(){
//	can = true;
//	ms(mark);
//	ms(used);
//	int n, m;
//	cin >> n >> m;
//	string s;
//	cin >> s;
//	forn(i, n){
//		if (s[i] != '?')
//			mark[i] = s[i] - 'a' + 1;
//	}
//	ll ans = 1;
//	forn(i, n / 2){
//		if (mark[i] != mark[n - i - 1]){
//			if (mark[i] && mark[n - i - 1])
//				ans = 0;
//			else{
//				mark[i] = mark[n - i - 1] = max(mark[i], mark[n - i - 1]);
//			}
//		}
//	}
//	forn(i, m){
//		int l, r;
//		cin >> l >> r;
//		l--, r--;
//		if (mark[l] != mark[r] || !mark[l]){
//			g[l].push_back(r);
//			g[r].push_back(l);
//		}
//	}
//	for (int i = 0; i < n; i++){
//		if (!mark[i]){
//			g[i].push_back(n - i - 1);
//		}
//	}
//	forn(i, n){
//		if (sz(g[i]) && mark[i] && !used[i] && can){
//			dfs(i, mark[i]);
//		}
//	}
//	forn(i, n){
//		if (sz(g[i]) && !used[i] && !mark[i]){
//			dfs(i, 111);
//			ans = ans * 26 % mod;
//		}
//	}
//	if (!can) ans = 0;
//	cout << ans << "\n";
//	forn(i, n) g[i].clear();
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);*/
//#endif
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	while (n--){
//		solve();
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}