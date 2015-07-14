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
//const long long mod = 1e+18;
//
//void print1(ll val){
//	int cnt = 0;
//	ll buf = val;
//	while(buf != 0) {
//		cnt++;
//		buf /= 10;
//	}
//	forn(i, 18-cnt) cout << '0';
//	cout << val << "\n";
//}
//
//struct longInt{
//	ll a, b;
//
//	longInt(){
//		a = b = 0;
//	}
//
//	longInt(ll a, ll b){
//		this->a = a;
//		this->b = b;
//	}
//
//	longInt operator + (const longInt &o){
//		ll A = a + o.a;
//		ll B = b + o.b;
//		A += B / mod;
//		B %= mod;
//		return longInt(A, B);
//	}
//
//	void print(){
//		if (a != 0){
//			cout << a;
//			print1(b);
//		} else {
//			cout << b << "\n";
//		}
//	}
//};
//
//longInt dp[120][120][60];
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
//	int n, k;
//	cin >> n >> k;
//	n *= 2;
//	dp[0][0][0] = longInt(0, 1);
//	forn(i, n + 1) forn(K, k + 1) forn(bal, 51){
//		if (bal != 0){
//			dp[i+1][K][bal - 1] = dp[i+1][K][bal - 1] + dp[i][K][bal];
//		}
//		dp[i+1][max(K, bal + 1)][bal + 1] = dp[i+1][max(K, bal + 1)][bal + 1] + dp[i][K][bal];
//	}
//	dp[n][k][0].print();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
