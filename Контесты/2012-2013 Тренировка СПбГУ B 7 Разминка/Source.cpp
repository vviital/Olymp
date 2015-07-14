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
//int x[] = { 1, 0, -1, 0 };
//int y[] = { 0, 1, 0, -1 };
//
//const int maxn = 100;
//char arr[maxn][maxn];
//
//int dfs(pii cur, int pred){
//	int count = 1;
//	forn(iter, 4){
//		int tox = cur.X + x[iter];
//		int toy = cur.Y + y[iter];
//		if (arr[tox][toy] == pred + 1){
//			count += dfs(mp(tox, toy), arr[tox][toy]);
//		}
//	}
//	return count;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("path.in", "r", stdin);
//	freopen("path.out", "w", stdout);
//#endif
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++){
//		string s;
//		cin >> s;
//		forn(j, len(s)){
//			arr[i + 1][j + 1] = s[j];
//		}
//	}
//	int count = 0;
//	forn(i, maxn) forn(j, maxn){
//		if (arr[i][j] == 'A'){
//			count = dfs(mp(i, j), 'A');
//		}
//	}
//	if (count == 26){
//		cout << "YES\n";
//	}
//	else {
//		cout << "NO\n";
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}