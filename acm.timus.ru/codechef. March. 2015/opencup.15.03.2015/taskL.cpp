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
//#define pll pair<ll, ll>
//
//const int maxn = 1e+5 + 100;
//vector<int> mas[maxn];
//
//ll count(int val, int l, int r){
//	int index1 = lower_bound(ALL(mas[val]), r) - mas[val].begin() + 1;
//	int index2 = mas[val].end() - lower_bound(ALL(mas[val]), l - 1) + 1;
//	return (index1 + index2) * (ll) val;
//}
//
//void del(map<int,int> &mm, int val){
//	mm[val]--;
//	if (mm[val] == 0) mm.erase(val);
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
//	int n;
//	scanf("%d", &n);
//	vector<int> arr(n);
//	map<int, int> mm;
//	forn(i, n) {
//		scanf("%d", &arr[i]);
//		mm[arr[i]]++;
//	}
//	map<int,int>::iterator it = mm.end();
//	it--;
//	ll minvalue = (*it).X * (ll) (*it).Y;
//	forn(i, sz(arr)){
//		if (arr[i] != 0){
//			if (i != 0){
//				del(mm, arr[i]);
//				mm[arr[i] - 1]++;
//				del(mm, arr[i-1]);
//				mm[arr[i-1] + 1]++;
//
//				it = mm.end();
//				it--;
//
//				minvalue = min(minvalue, (*it).X * (ll) (*it).Y);
//
//				del(mm, arr[i-1] + 1);
//				mm[arr[i-1]]++;
//				del(mm, arr[i] - 1);
//				mm[arr[i]]++;
//			}
//			if (i != sz(arr) - 1){
//				del(mm, arr[i]);
//				mm[arr[i] - 1]++;
//				del(mm, arr[i+1]);
//				mm[arr[i+1] + 1]++;
//
//				it = mm.end();
//				it--;
//
//				minvalue = min(minvalue, (*it).X * (ll) (*it).Y);
//
//				del(mm, arr[i+1] + 1);
//				mm[arr[i+1]]++;
//				del(mm, arr[i] - 1);
//				mm[arr[i]]++;
//			}
//		}
//	}
//	cout << minvalue << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
