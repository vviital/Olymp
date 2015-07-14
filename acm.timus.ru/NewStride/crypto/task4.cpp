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
//int getval(char ch){
//	if (ch >= '0' && ch <= '9')
//		return ch - '0';
//	return ch - 'a' + 10;
//}
//
//int parse(string &s, int cnt){
//	return getval(s[cnt]) * 16 + getval(s[cnt + 1]);
//}
//
//int getnext(char ch, int val){
//	int value = ch - 'a';
//	value += val;
//	return (value % 26) + 'a';
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
//	string s;
//	cin >> s;
//	vector<int> arr(len(s) / 2);
//	for(int i = 0; i < len(s); i += 2){
//		arr[i / 2] = parse(s, i);
//	}
//	for(int i = 0; i < sz(arr); ++i){
//		int val = (char)getnext(arr[i], i);
//		cout << (char)val;
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
