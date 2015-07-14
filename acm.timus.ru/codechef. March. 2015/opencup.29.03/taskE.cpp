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
//const int maxn = 1e+6 + 100;
//vector<int> val;
//int primes[maxn];
//
//int gcd(int a, int b){
//	while(b){
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//void precalc(){
//	for(ll i=2; i<maxn; i++){
//		if (!primes[i]){
//			for(ll j = i; j < maxn; j+=i){
//				primes[j] = i;
//			}
//		}
//	}
//}
//
//int check(int value){
//	int cnt = 1;
//	int curgcd = 0;
//	for(int i=0; i<sz(val); i++){
//		curgcd = gcd(curgcd, val[i]);
//		if (primes[curgcd] >= value){
//			continue;
//		}
//		curgcd = val[i];
//		cnt++;
//	}
//	return cnt;
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
//	int n, k;
//	scanf("%d%d", &n, &k);
//	val.resize(n);
//	precalc();
//	forn(i, sz(val)){
//		scanf("%d", &val[i]);
//	}
//	int l = 0, r = 1e+9;
//	while(r - l > 1){
//		int middle = (l + r) >> 1;
//		int can = check(middle);
//		if (can <= k)
//			l = middle;
//		else
//			r = middle;
//	}
//	cout << l << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
