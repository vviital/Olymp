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
//string oper[] = { "|=", "==", "<", "<=", ">", ">=" };
//
//vector<string> split(string s){
//	vector<string> ss;
//	ss.push_back("");
//	forn(i, len(s)){
//		if (s[i] == ' ') ss.push_back("");
//		else
//			ss.back().push_back(s[i]);
//	}
//	return ss;
//}
//
//int toInt(string s){
//	int ans = 0;
//	bool m = 0;
//	forn(i, len(s)) {
//		if (s[i] != '-')
//			ans = ans * 10 + s[i] - '0';
//		else{
//			m = 1;
//		}
//	}
//	return ans * (m ? -1 : 1);
//}
//
//string tr = "true\n";
//string fl = "false\n";
//
//void solve(string s){
//	vector<string> ss = split(s);
//	int l = toInt(ss[0]);
//	int r = toInt(ss[2]);
//	if (ss[1] == "!="){
//		if (l != r) cout << tr;
//		else cout << fl;
//		return;
//	}
//	if (ss[1] == "=="){
//		if (l == r) cout << tr;
//		else cout << fl;
//		return;
//	}
//	if (ss[1] == "<"){
//		if (l < r) cout << tr;
//		else cout << fl;
//		return;
//	}
//	if (ss[1] == "<="){
//		if (l <= r) cout << tr;
//		else cout << fl;
//		return;
//	}
//	if (ss[1] == ">"){
//		if (l > r) cout << tr;
//		else cout << fl;
//		return;
//	}
//	if (ss[1] == ">="){
//		if (l >= r) cout << tr;
//		else cout << fl;
//		return;
//	}
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);*/
//#endif
//	int n;
//	cin >> n;
//	string s;
//	getline(cin, s);
//	while (n--){
//		getline(cin, s);
//		solve(s);
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}