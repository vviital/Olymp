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
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("bad-hashing.in", "r", stdin);
//	freopen("bad-hashing.out", "w", stdout);
//#endif
//	unsigned int p;
//	cin >> p;
//	map<unsigned int, int> mm;
//	unsigned h = 0;
//	int cnt = 0;
//	string ans1, ans2;
//	while (true){
//		char ch = 'a';
//		if (cnt & 1) ch = 'b';
//		h = h * p + ch;
//		ans2.push_back(ch);
//		if (mm.find(h) != mm.end()){
//			int to = mm[h];
//			forn(iter, to + 1){
//				putchar(iter & 1 ? 'b' : 'a');
//			}
//			cout << "\n";
//			cout << ans2 << "\n";
//			exit(0);
//		}
//		mm[h] = cnt;
//		cnt += 1;
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}