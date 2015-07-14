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
//vector<int> g[20];
//int dp[20][1 << 18];
//bool used[20];
//
//bool dfs(int cur){
//	used[cur] = true;
//	bool ok = true;
//	forn(i, sz(g[cur])){
//		int to = g[cur][i];
//		if (!used[to])
//			ok = ok && dfs(to);
//		else
//			return false;
//	}
//	return ok;
//}
//
//vector<int> state[20];
//
//int count_bit(int val){
//	int cnt = 0;
//	while (val){
//		cnt += val & 1;
//		val >>= 1;
//	}
//	return cnt;
//}
//
//void solve(){
//	forn(i, 20) g[i].clear();
//	int n, m;
//	cin >> n >> m;
//	dp[0][0] = 0;
//	string s;
//	getline(cin, s);
//	map<string, int> mm;
//	vector<pii> edge;
//	vector<int> cost(n);
//	forn(i, n){
//		getline(cin, s);
//		int val = 0;
//		int ten = 1;
//		while (s.back() != ' '){
//			val = val + ten * (s.back() - '0');
//			ten *= 10;
//			s.pop_back();
//		}
//		s.pop_back();
//		mm[s] = i;
//		cost[i] = val;
//	}
//	forn(iter, m){
//		getline(cin, s);
//		int i = 0;
//		for (; i < len(s); i++)
//			if (s[i] == '-'){
//				break;
//			}
//		string from(i - 1, 'a');
//		for (int j = 0; j < i - 1; j++) from[j] = s[j];
//		string to(sz(s) - 5 - sz(from), ' ');
//		i += 4;
//		int cnt = 0;
//		for (; i < len(s); i++)
//			to[cnt++] = s[i];
//		edge.push_back(mp(mm[from], mm[to]));
//	}
//	forn(i, sz(edge)){
//		g[edge[i].Y].push_back(edge[i].X);
//	}
//	vector<int> can;
//	forn(i, n){
//		ms(used);
//		bool ccc = dfs(i);
//		int mask = 0;
//		if (!ccc){
//			cout << 0 << "\n";
//			return;
//		}
//		forn(iter, n){
//			if (used[iter])
//				mask |= 1 << iter;
//		}
//		can.push_back(mask);
//	}
//	int ans = 0;
//	for (int iter = 1; iter <= n; iter++){
//		forn(i, sz(state[iter])){
//			int mask = state[iter][i];
//			dp[iter][mask] = -INF;
//			forn(bit, n){
//				if ((mask | (can[bit])) == mask){
//					int from = mask ^ (1 << bit);
//					dp[iter][mask] = max(dp[iter][mask], dp[iter - 1][from] + cost[bit] * iter);
//					ans = max(ans, dp[iter][mask]);
//				}
//			}
//		}
//	}
//	cout << ans << "\n";
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//
//	//freopen("input.txt", "r", stdin);
//	/*freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);*/
//#endif
//	ios_base::sync_with_stdio(false);
//	forn(i, 1 << 18){
//		int cnt = count_bit(i);
//		state[cnt].push_back(i);
//	}
//	int n;
//	cin >> n;
//	while (n--){
//		solve();
//	}
//#ifndef _DEBUG
//	//cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}