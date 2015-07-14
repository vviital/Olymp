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
//const int maxn = 500;
//int n;
//int arr[maxn][maxn];
//bool used[maxn];
//vector<int> g[maxn];
//int mark[maxn];
//
//void dij(int s){
//	vector<int> d(n, INF);
//	ms(used);
//	int cur = s;
//	d[cur] = 0;
//	while (cur != -1){
//		used[cur] = true;
//		forn(to, n){
//			if (arr[cur][to] == -1) continue;
//			d[to] = min(d[to], d[cur] + arr[cur][to]);
//		}
//		cur = -1;
//		forn(i, n){
//			if (used[i]) continue;
//			if (cur == -1) cur = i;
//			if (d[i] < d[cur]) cur = i;
//		}
//	}
//	forn(from, n) forn(to, n){
//		if (arr[from][to] <= 0) continue;
//		if (d[to] == d[from] + arr[from][to]){
//			g[from].push_back(to);
//			mark[to]++;
//		}
//	}
//}
//
//int dfs(int cur){
//	if (used[cur]) return 1;
//	used[cur] = true;
//	int count = 1;
//	forn(i, sz(g[cur])){
//		int to = g[cur][i];
//		if (used[to]) continue;
//		count += dfs(to);
//	}
//	return count;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("joke.in", "r", stdin);
//	freopen("joke.out", "w", stdout);
//#endif
//	cin >> n;
//	forn(i, n) forn(j, n){
//		cin >> arr[i][j];
//	}
//	dij(0);
//	int best = 0;
//	ms(used);
//	int all = dfs(0);
//	forn(i, n){
//		/*forn(j, sz(g[i])){
//			ms(used);
//			used[i] = true;
//			int cur = dfs(0);
//			best = max(best, all - cur);
//		}*/
//		if (mark[i] == 1){
//			ms(used);
//			used[i] = true;
//			int cur = dfs(0);
//			best = max(best, all - cur);
//		}
//	}
//	cout << best << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}