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
//double arr[] = {8.17, 1.49, 2.78, 4.25, 12.7, 2.23, 2.02, 6.09, 6.97, 0.15, 0.77, 4.03, 2.41, 6.75, 7.51, 1.93, 0.01, 5.99, 6.33, 9.06, 2.76, 0.98, 2.36, 0.15, 1.97, 0.07};
//double narr[26];
//
//double sqr(double x){
//	return x * x;
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
//	getline(cin, s);
//	int all = 0;
//	forn(i, len(s)){
//		if (s[i] >= 'A' && s[i] <= 'Z')
//			narr[s[i] - 'A']++, all++;
//	}
//	forn(i, 26) arr[i] /= 100;
//	forn(i, 26) narr[i] /= all;
//	int best = 0;
//	double phi2 = 1e+9;
//	for(int i = 0; i < 26; i++){
//		double curval = 0;
//		for(int j = 0; j < 26; j++){
//			int to = (i + j) % 26;
//			curval += sqr(arr[j] - narr[to]) / arr[j];
//		}
//		//cout << i << " " << phi2 << "\n";
//		if (curval < phi2){
//			phi2 = curval;
//			best = i;
//		}
//	}
//	cout << best << "\n";
//	forn(i, len(s)){
//		if (s[i] >= 'A' && s[i] <= 'Z')
//			s[i] = (s[i] - 'A' - best + 26) % 26 + 'A';
//		cout << s[i];
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
