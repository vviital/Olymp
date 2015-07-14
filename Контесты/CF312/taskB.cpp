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
//const int maxn = 1e+6 + 10;
//pii cnt[maxn];
//int coun[maxn];
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen("trans.in", "r", stdin);
//	freopen("trans.out", "w", stdout);*/
//#endif
//	int n;
//	cin >> n;
//	forn(i, maxn) cnt[i] = mp(-1, -1);
//	forn(i, n) {
//		int val;
//		cin >> val;
//		coun[val]++;
//		if (cnt[val].X == -1){
//			cnt[val].X = i;
//		}
//		cnt[val].Y = i;
//	}
//	int cond = 0;
//	forn(i, maxn){
//		cond = max(cond, coun[i]);
//	}
//	pii best = mp(-1e+8, 1e+8);
//	int index = -1;
//	forn(i, maxn){
//		if (cond == coun[i] && cnt[i].Y - cnt[i].X <= best.Y - best.X){
//			best = cnt[i];
//		}
//	}
//	cout << best.X + 1 << " " << best.Y + 1 << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}