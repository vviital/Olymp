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
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	string s, t;
//	cin >> s >> t;
//	forn(i, len(s)) s[i] -= 'a';
//	forn(i, len(t)) t[i] -= 'a';
//	s.back() += 1;
//	int mod = 'z' - 'a' + 1;
//	for(int i=len(s) - 1; i >= 1; i--){
//		s[i - 1] += s[i] / mod;
//		s[i] %= mod;
//	}
//	forn(i, len(s)) s[i] += 'a';
//	forn(i, len(t)) t[i] += 'a';
//	if (s < t) cout << s << "\n";
//	else cout << "No such string\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}