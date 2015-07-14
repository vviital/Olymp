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
//char arr[maxn][maxn];
//int n, m;
//set<string> ss;
//
//void precalc(){
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < m; j++){
//			string temp;
//			for (int jj = j; jj < m; jj++){
//				temp.push_back(arr[i][jj]);
//				ss.insert(temp);
//			}
//			temp = "";
//			for (int ii = i; ii < n; ii++){
//				temp.push_back(arr[ii][j]);
//				ss.insert(temp);
//			}
//		}
//	}
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("words.in", "r", stdin);
//	freopen("words.out", "w", stdout);
//#endif
//	cin >> n >> m;
//	forn(i, n){
//		string s;
//		cin >> s;
//		forn(j, m){
//			arr[i][j] = s[j];
//		}
//	}
//	precalc();
//	int q;
//	cin >> q;
//	forn(i, q){
//		string s;
//		cin >> s;
//		if (ss.find(s) != ss.end()){
//			cout << "YES\n";
//		}
//		else {
//			cout << "NO\n";
//		}
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}