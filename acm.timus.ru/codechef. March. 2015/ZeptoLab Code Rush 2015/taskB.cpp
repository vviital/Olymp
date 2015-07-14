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
//vector<int> mas;
//const int maxn = 1e+5;
//int vv[maxn];
//int maxx = 0;
//
//int dfs(int cur){
//	int ans = mas[cur];
//	int to = cur * 2;
//	if (to >= sz(mas) - 1) return ans;
//	int val1 = dfs(cur * 2);
//	int val2 = dfs(cur * 2 + 1);
//	vv[cur] = max(val1, val2);
//	return ans + max(val1, val2);
//}
//
//ll dfs1(int cur, int was){
//	vv[cur] -= was;
//	ll ans = -vv[cur];
//	was -= ans;
//	if (cur * 2 >= sz(mas) - 1) return ans;
//	ans += dfs1(cur * 2, was - mas[cur * 2]);
//	ans += dfs1(cur * 2 + 1, was - mas[cur * 2 + 1]);
//	return ans;
//}
//
//void solve(){
//	maxx = dfs(1);
//	ll ans = dfs1(1, maxx);
//	cout << ans << "\n";
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
//	int n;
//	scanf("%d", &n);
//	n = (1 << (n + 1) );
//	mas.resize(n + 1);
//	for(int i=2; i <= n; i++)
//		scanf("%d", &mas[i]);
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
