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
//int count1[1000];
//int count2[1000];
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
//	int a = 0, b = 0;
//	forn(i, len(s)){
//		count1[s[i]]++;
//	}
//	forn(i, len(t)){
//		count2[t[i]]++;
//	}
//	forn(i, 1000){
//		int val = min(count1[i], count2[i]);
//		a += val;
//		count1[i] -= val;
//		count2[i] -= val;
//	}
//	for(int i = 'a'; i <= 'z'; i++){
//		int upper = i - 'a' + 'A';
//		int val = min(count1[i], count2[upper]);
//		b += val;
//		count1[i] -= val;
//		count2[upper] -= val;
//	}
//	for(int i = 'A'; i <= 'Z'; i++){
//		int upper = i - 'A' + 'a';
//		int val = min(count1[i], count2[upper]);
//		b += val;
//		count1[i] -= val;
//		count2[upper] -= val;
//	}
//	cout << a << " " << b << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
