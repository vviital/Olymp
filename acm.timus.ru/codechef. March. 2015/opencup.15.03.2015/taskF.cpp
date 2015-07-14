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
//const int maxn = 20;//1e+5 + 100;
//const int mod = 1e+9 + 9;
//
//struct num{
//	long double value;
//	ll dpvalue;
//
//	num(){
//		value = dpvalue = -1;
//	}
//
//	num(long double value, ll dpvalue){
//		this->value = value;
//		this->dpvalue = dpvalue;
//	}
//
//	num operator * (const num &o) const{
//		return num(value * o.value, dpvalue * (ll) o.dpvalue % mod);
//	}
//
//	bool operator < (const num &o) const{
//		return value < o.value;
//	}
//};
//
//num dp[30][maxn];
//int per[1000];
//
//bool isPrime(int val){
//	for(int i=2; i * i <= val; i++){
//		if (val % i == 0) return false;
//	}
//	return true;
//}
//
//num myPow(num val, int p){
//	num mul = val;
//	num ans(1, 1);
//	while(p){
//		if (p & 1){
//			ans = ans * mul;
//		}
//		mul = mul * mul;
//		p >>= 1;
//	}
//	return ans;
//}
//
//void solve(){
//	int n;
//	cin >> n;
//	int cnt = 0;
//	for(int i=3; i<=1000; i++){
//		if (isPrime(i)) per[cnt++] = i;
//	}
//	for(int j=0; j<=20; j++)
//		for(int i=0; i<=n; i++){
//			dp[j][i] = myPow(num(per[j], per[j]), i);
//		}
//	dp[0][1] = num(1, 1);
//	for(int i=19; i >= 0; i--){
//		for(int j=1; j<=n; j++){
//			ll cur = 1;
//			for(int pp = 0; pp <= 20; pp++){
//				cur *= per[i];
//				num current = myPow(num(per[i], per[i]), pp);
//				if (j % (cur + 1) == 0){
//					dp[i][j] = min(dp[i+1][j / (cur + 1)] * current, dp[i][j]);
//				}
//			}
//		}
//	}
//	cout << dp[0][n].dpvalue << "\n";
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
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
