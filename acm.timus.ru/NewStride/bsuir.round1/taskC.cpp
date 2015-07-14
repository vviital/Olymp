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
//#ifdef _DEBUG
//	const int block = 3;
//#else
//	const int block = 1000;
//#endif
//const int maxn = 1e+5 + 10000;
//
//vector<int> arr[maxn];
//vector<int> sum[maxn];
//vector<int> rsum[maxn];
//vector<int> sums;
//
//int ABS(int a){
//	if (a > 0) return a;
//	return -a;
//}
//
//ll stupid(int n, int m){
//	ll ans = 0;
//	for(int i=0; i<n; i++){
//		int cursum = 0;
//		for(int j = i; j < n; j++){
//			int bl = j / block;
//			int index = j % block;
//			cursum += arr[bl][index];
//			if (ABS(cursum) > m) {
//				cout << i << " " << j << " " << cursum << "\n";
//				ans++;
//			}
//		}
//	}
//	return ans;
//}
//
//inline int findB(vector<int> &mas, int value){
//	int l = -1, r = sz(mas);
//	while(r - l > 1){
//		int middle = (r + l) >> 1;
//		if (mas[middle] > value)
//			l = middle;
//		else
//			r = middle;
//	}
//	return l + 1;
//}
//
//inline int findG(vector<int> &mas, int value){
//	int l = -1, r = sz(mas);
//	while(r - l > 1){
//		int middle = (r + l) >> 1;
//		if (mas[middle] < value)
//			l = middle;
//		else
//			r = middle;
//	}
//	return l + 1;
//}
//
//ll smartSolve(int n, int m){
//	int last = (n - 1) / block + 1;
//	sums.clear();
//	forn(i, last){
//		int cursum = 0;
//		sum[i].clear();
//		forn(j, sz(arr[i])){
//			cursum += arr[i][j];
//			sum[i].pb(cursum);
//		}
//		sort(ALL(sum[i]));
//		rsum[i] = sum[i];
//		reverse(ALL(sum[i]));
//		sums.pb(cursum);
//	}
//	long long ans = 0;
//	for(int i = 0; i < n; ++i){
//		int curb = i / block;
//		int curindex = i % block;
//		int cursum = 0;
//		for(; curindex < sz(arr[curb]); ++curindex){
//			cursum += arr[curb][curindex];
//			if (ABS(cursum) > m) ans++;
//		}
//		curb++;
//		for(; curb < last; ++curb){
//			int val1 = findB(sum[curb], m - cursum);
//			int val2 = findG(rsum[curb], -m - cursum);
//			ans += min(sz(sum[curb]), val1 + val2);
//			cursum += sums[curb];
//		}
//	}
//	return ans;
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
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int last = 0;
//	forn(i, n){
//		int value;
//		scanf("%d", &value);
//		arr[i / block].pb(value);
//		last = i / block;
//	}
//	cout << smartSolve(n, m) << "\n";
//	return 0;
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
