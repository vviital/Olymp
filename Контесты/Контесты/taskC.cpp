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
//const int maxn = 1e+5 + 100;
//const int block = 300;
//ll arr[maxn];
//ll sum[1000];
//ll mod = 1000003;
//int n;
//
//void build(){
//	forn(i, maxn / block){
//		sum[i] = 1;
//	}
//	for (int i = 0; i < n; i++){
//		int index = i / block;
//		sum[index] = sum[index] * arr[i] % mod;
//	}
//}
//
//int query(int l, int r){
//	int begin = l / block;
//	int end = r / block;
//	ll ans = 1;
//	for (int i = begin + 1; i < end; ++i){
//		ans = ans * sum[i] % mod;
//	}
//	int to = min((begin + 1) * block, r + 1);
//	for (int i = l; i < to; i++){
//		ans = ans * arr[i] % mod;
//	}
//	if (begin != end)
//		for (int i = end * block; i <= r; i++){
//			ans = ans * arr[i] % mod;
//		}
//	return ans;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("army.in", "r", stdin);
//	freopen("army.out", "w", stdout);
//#endif
//	scanf("%d", &n);
//	forn(i, n){
//		int val;
//		scanf("%d", &val);
//		arr[i] = val;
//	}
//	build();
//	int q;
//	scanf("%d", &q);
//	forn(iter, q){
//		int a, l, r;
//		scanf("%d%d%d", &a, &l, &r);
//		l--, r--;
//		if (a == 0){
//			for (int i = l; i <= r; i++){
//				arr[i]++;
//			}
//			build();
//		}
//		else {
//			int ans = query(l, r);
//			printf("%d\n", ans);
//		}
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}