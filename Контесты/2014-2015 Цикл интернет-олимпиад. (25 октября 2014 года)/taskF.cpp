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
//bool cmp(const string &a, const string &b){
//	/*if (a == b || len(a) == len(b))
//		return a < b;
//	int pointer = 0;
//	while (pointer < min(sz(a), sz(b)) && a[pointer] == b[pointer])
//		pointer++;
//	if (pointer != min(sz(a), sz(b))){
//		return a[pointer] < b[pointer];
//	}*/
//	string t1 = a + b;
//	string t2 = b + a;
//	return t1 < t2;
//	/*if (pointer == min(sz(a), sz(b))){
//		if (pointer == sz(a)){
//			if (b[pointer] == b[pointer - 1]) return true;
//		}
//		if (pointer == sz(b)){
//			if (a[pointer] == a[pointer - 1]) return true;
//		}
//		return sz(a) < sz(b);
//	}
//	return a[pointer] < b[pointer];*/
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("maxnumber.in", "r", stdin);
//	freopen("maxnumber.out", "w", stdout);
//#endif
//	int n;
//	cin >> n;
//	vector<string> ss;
//	for (int i = 0; i < n; i++){
//		string s;
//		cin >> s;
//		ss.push_back(s);
//	}
//	sort(ALL(ss), cmp);
//	reverse(ALL(ss));
//	for (int i = 0; i < sz(ss); i++){
//		cout << ss[i] << " ";
//	}
//	cout << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}