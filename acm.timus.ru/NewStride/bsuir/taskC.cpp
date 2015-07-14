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
//const int maxn = 2e+6 + 100;
//int phi[maxn];
//int pred[maxn];
//
//int poww(int a, int p){
//	int ans = 1;
//	forn(i, p) ans *= a;
//	return ans;
//}
//
//void precalc(){
//	phi[0] = 0;
//	phi[1] = 1;
//	for(int i = 2; i < maxn; ++i) pred[i] = -1;
//	for(int i = 2; i < maxn; ++i)
//	{
//		if (pred[i] == -1){
//			pred[i] = 0;
//			for (ll j = i * (ll) i; j < maxn; j += i){
//				pred[j] = i;
//			}
//		}
//	}
//	for(int i = 2; i < maxn; ++i){
//		if (pred[i] == 0){
//			phi[i] = i - 1;
//			continue;
//		}
//		int cur = i;
//		int cond = 1;
//		int cnt = 0;
//		while(cur % pred[i] == 0)
//			cur /= pred[i], cond *= pred[i], cnt++;
//		if (cur == 1){
//			phi[i] = poww(pred[i], cnt - 1) * (pred[i] -  1);
//			continue;
//		}
//		phi[i] = phi[i / cond] * phi[cond];
//	}
//}
//
//int gcd(int a, int b){
//	while(b){
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//pii query(ll k){
//	ll sum = 0;
//	int i = 0;
//	while(k > sum){
//		sum += phi[i++];
//	}
//	sum -= phi[--i];
//	k -= sum;
//	int ans = 0;
//	for(int j = 1; j <= i; ++j){
//		if (gcd(j, i) == 1){
//			k--;
//			ans = j;
//		}
//		if (k == 0) break;
//	}
//	return mp(ans, i);
//}
//
//void stress(){
//	//int cnt = 0;
//	//for (int b = 1; b <= 1000; b++){
//	//  for (int a = 1; a <= b; a++){
//	//   if (gcd(a, b) == 1){
//	//	   cnt++;
//	//	   if (mp(a, b) != query(cnt)){
//	//			cout << "error" << "\n";
//	//			cout << a << " " << b << "\n";
//	//			cout << query(cnt).X;;// << " " << query(cnt).Y << "\n";
//	//			cout << query(cnt - 1).X;// << " " << query(cnt - 1).Y << "\n";
//	//			return;
//	//	   }
//	//   }
//	//  }
//	// }
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#endif
//	precalc();
//	ll k;
//	cin >> k;
//	pii ans = query(k);
//	cout << ans.X << "/" << ans.Y << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
