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
//const int maxn = 100;
//bool used[4][maxn];
//
//int x[] = { -1, 0, 1 };
//int y[] = { -1, 0, 1 };
//
//void dfs(pii cur){
//	used[cur.X][cur.Y] = true;
//	forn(X, 3) forn(Y, 3){
//		int tox = cur.X + x[X];
//		int toy = cur.Y + y[Y];
//		if (!used[tox][toy]){
//			dfs(mp(tox, toy));
//		}
//	}
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("road.in", "r", stdin);
//	freopen("road.out", "w", stdout);
//#endif
//	int n;
//	cin >> n;
//	forn(iter, 4) forn(i, maxn) used[iter][i] = true;
//	forn(iter, 2){
//		string s;
//		cin >> s;
//		forn(i, len(s)){
//			if (s[i] == '.') used[iter + 1][i + 1] = false;
//		}
//	}
//	dfs(mp(1, 1));
//	if (used[1][n])
//		cout << "YES\n";
//	else
//		cout << "NO\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}