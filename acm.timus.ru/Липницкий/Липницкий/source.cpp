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
//void gcd(ll a, ll b){
//	ll x1 = 1, y1 = 0;
//	ll x2 = 0, y2 = 1;
//
//	while(b){
//		ll q = a / b;
//		a = a - b * q;
//		swap(a, b);
//
//		x1 = x1 - q * x2;
//		swap(x1, x2);
//
//		y1 = y1 - q * y2;
//		swap(y1, y2);
//	}
//	cout << x1 << " " << y1 << "\n";
//}
//
//void bin(int a){
//	for(int i=30; i >= 0; i--){
//		if (a & (1 << i)) cout << 1;
//		else cout << 0;
//	}
//	cout << "\n";
//}
//
//void fun(ll a, ll q){
//	vector<ll> mas;
//	while(a){
//		mas.pb(a % q);
//		cout << a % q << "\t" << a / q << "\n";
//		a /= q;
//	}
//	reverse(ALL(mas));
//	for(int i=0; i<sz(mas); ++i) cout << mas[i];
//	cout << "\n";
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	ll aa = 15906672;
//	cout << hex << aa << "\n";
//	return 0;
//	ll q, c;
//	cin >> q >> c;
//	cout << hex << c << "\n";
//	
//	/*fun(c, 2);
//	fun(c, q);*/
//	return 0;
//	ll a, b;
//	cin >> a >> b;
//	gcd(a, b);
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
