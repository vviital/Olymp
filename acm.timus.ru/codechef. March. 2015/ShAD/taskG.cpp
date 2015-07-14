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
//int mas[20];
//int count1 = 0;
//
//bool check(){
//	int n = 3 + 4 + 5;
//	for(int i=1; i < n; ++i){
//		if (mas[i] == mas[i - 1])
//			if (mas[i] == 2)
//				return false;
//	}
//	return true;
//}
//
//void show(){
//	return;
//	int n = 3 + 4 + 5;
//	forn(i, n) cout << mas[i];
//	cout << "\n";
//}
//
//void rec(int cur, int r, int b, int g){
//	if (r == b && b == g && r == 0){
//		if (check()){
//			count1++;
//			show();
//		}
//	}
//	if (r){
//		mas[cur] = 1;
//		rec(cur + 1, r - 1, b, g);
//		mas[cur] = 0;
//	}
//	if (b){
//		mas[cur] = 2;
//		rec(cur + 1, r, b - 1, g);
//		mas[cur] = 0;
//	}
//	if (g){
//		mas[cur] = 3;
//		rec(cur + 1, r, b, g - 1);
//		mas[cur] = 0;
//	}
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	rec(0, 3, 4, 5);
//	//rec(0, 1, 2, 1);
//	cout << count1 << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
