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
//const int maxn = 1010;
//char arr[maxn][maxn];
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("tic-tac-toe.in", "r", stdin);
//	freopen("tic-tac-toe.out", "w", stdout);
//#endif
//	int n, m;
//	cin >> n >> m;
//	forn(i, n){
//		string buf;
//		cin >> buf;
//		forn(iter, len(buf)){
//			arr[i][iter] = buf[iter];
//		}
//	}
//	bool good = false;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++){
//			int cnt = 0;
//			if (arr[i][j] == '.'){
//				continue;
//			}
//			while (!good && j + cnt < m){
//				if (arr[i][j + cnt] == arr[i][j]){
//					cnt++;
//					if (cnt == 5) good = true;
//				}
//				else
//					break;
//			}
//			cnt = 0;
//			while (!good && i + cnt < n){
//				if (arr[i + cnt][j] == arr[i][j]){
//					cnt++;
//					if (cnt == 5) good = true;
//				}
//				else
//					break;
//			}
//			cnt = 0;
//			while (!good && j + cnt < m && i + cnt < n){
//				if (arr[i + cnt][j + cnt] == arr[i][j]){
//					cnt++;
//					if (cnt == 5) good = true;
//				}
//				else
//					break;
//			}
//			cnt = 0;
//			while (!good && j + cnt < m && i - cnt >= 0){
//				if (arr[i - cnt][j + cnt] == arr[i][j]){
//					cnt++;
//					if (cnt == 5) good = true;
//				}
//				else
//					break;
//			}
//			if (good)
//				break;
//		}
//	if (good){
//		cout << "Yes\n";
//	}
//	else {
//		cout << "No\n";
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}