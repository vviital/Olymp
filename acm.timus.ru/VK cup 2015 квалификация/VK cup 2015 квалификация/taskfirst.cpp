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
//set<string> names;
//vector<pair<string, string> > relat;
//map<string, int> nn;
//
//vector<int> g[1000];
//
//string procesname(string x){
//	forn(i, sz(x)){
//		if (x[i] >= 'a' && x[i] <= 'z') continue;
//		x[i] = x[i] - 'A' + 'a';
//	}
//	return x;
//}
//
//int dfs(int cur){
//	if (sz(g[cur]) == 0) return 0;
//	int ans = 0;
//	forn(i, sz(g[cur])){
//		int to = g[cur][i];
//		int buf = dfs(to);
//		ans = max(ans, buf + 1);
//	}
//	return ans;
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
//	cin >> n;
//	relat.resize(n);
//	forn(i, n){
//		string f, t;
//		cin >> f >> t >> t;
//		f = procesname(f);
//		t = procesname(t);
//		swap(f, t);
//		names.insert(f);
//		names.insert(t);
//		relat[i] = mp(f, t);
//	}
//	int cnt = 0;
//	for(set<string>::iterator it = names.begin(); it != names.end(); ++it){
//		string cur = (*it);
//		nn[cur] = cnt++;
//	}
//	forn(i, sz(relat)){
//		string ff = relat[i].X;
//		string tt = relat[i].Y;
//		int f = nn[ff];
//		int t = nn[tt];
//		g[f].pb(t);
//	}
//	int b = nn["polycarp"];
//	int ans = dfs(b);
//	cout << ans + 1<< "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
