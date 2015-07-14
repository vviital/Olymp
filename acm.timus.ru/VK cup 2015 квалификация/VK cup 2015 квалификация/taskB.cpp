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
//vector<pii> h;
//vector<int> w;
//vector<pii> ans;
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
//	ans.resize(n);
//	h.resize(n);
//	w.resize(n);
//	int all = 0;
//	forn(i, n){
//		scanf("%d%d", &w[i], &h[i].X);
//		all += w[i];
//		h[i].Y = i;
//	}
//	sort(ALL(h));
//	forn(i, n){
//		ans[i].Y = all - w[i];
//		if (h.back().Y == i) ans[i].X = h[sz(h) - 2].X;
//		else ans[i].X = h.back().X;
//	}
//	forn(i, sz(ans)){
//		printf("%d ", ans[i].X * ans[i].Y);
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
