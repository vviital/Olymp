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
//const int maxn = 1e+8;
////vector<int> prime;
//int prime[maxn];
//int sz = 0;
//
//inline void add(int val){
//	prime[sz++] = val;
//}
//
//int log2n(int n){
//	return log(n * 1.) / log(2.) + 10;
//}
//
//int nextInt32(){
//	return ((int)rand() << 15) | (int)rand();
//}
//
//int binpow(int a, int p, int mod){
//	int answer = 1;
//	int mul = a;
//	while(p){
//		if (p & 1) answer = (answer * (ll) mul) % mod;
//		mul = (mul * (ll) mul) % mod;
//		p >>= 1;
//	}
//	return answer;
//}
//
//bool rabin(int n){
//	if (n == 2) return true;
//	if (!(n & 1)) return false;
//	int m = n - 1;
//	int s = 0;
//	while(!(m & 1)) m >>= 1, s++;
//	int r = log2n(n);
//	forn(iter, r){
//		int a = 1;
//		while(a == 1 || a == 0) a = nextInt32() % n;
//		if (n % a == 0) return false;
//		int at = binpow(a, m, n);
//		if (at == 1) continue;
//		bool ok = false;
//		forn(k, s){
//			int cur = binpow(at, 1 << k, n);
//			if (cur == n - 1) {
//				ok = true;
//				break;
//			}
//		}
//		if (!ok) return false;
//	}
//	return true;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#else
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
//	int n = 34;
//	for(int i=2; i<n; i++){
//		if (n % i == 0) cerr << i << "\n";
//	}
//	/*int n = 1e+9;
//	prime[0] = 2;
//	sz = 1;
//	int magic = (1e+6);
//	for(int i=3; i<n; i++){
//		bool ok = true;
//		if (i % (int)(1e+6) == 0) cerr << i << "\n";
//		if (i & 1){
//			if (!rabin(i)) ok = false;
//			if (ok) prime[sz++] = i;
//		}
//	}
//	printf("%d\n", sz);
//	forn(i, sz) printf("%d, ", prime[i]);
//	printf("\n");*/
//#ifndef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
