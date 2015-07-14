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
//ll pow2(ll p){
//	return 1LL << p;
//}
//
//ll intersectSinCos(ll sini, ll cosj){
//	if (sini < 0 || cosj < 0) return 0;
//	if (sini <= cosj) return 0;
//	ll dif = sini - cosj;
//	return pow2(sini + 1 - (dif - 1)) - pow2(sini + 1 - dif);
//}
//
//ll solve(ll S, ll C, ll K){
//	ll ans = 0;
//	if (S == C && S == 0) return 0;
//	if (K == 1){
//		if (S) ans = pow2(S) + 1;
//		forn(iter, C) {
//			ans += pow2(iter + 1);
//			ans -= intersectSinCos(S - 1, iter);
//		}
//		return ans;
//	}
//	ll lev = S - K;
//	if (lev < -1) return 0;
//	if (lev >= 0) ans = pow2(lev + 1) + 1;
//	lev++;
//	if (C && lev < S && lev >= 1){
//		forn(iter, C){
//			ans += intersectSinCos(lev, iter) - intersectSinCos(lev - 1, iter);
//		}
//	}
//	return ans;
//}
//
//ll solve(){
//	ll S, C, k;
//	cin >> S >> C >> k;
//	return solve(S, C, k);
//}
//
//void AddSin(vector<double> &points, int p){
//	forn(iter, 1000000){
//		double cur = PI * iter * 1. / (1 << p);
//		if (cur > 2 * PI) break;
//		points.pb(cur);
//	}
//}
//
//void AddCos(vector<double> &points, int p){
//	forn(iter, 1000000){
//		double cur = (PI / 2. + PI * iter * 1.) / (1 << p);
//		if (cur > 2 * PI) break;
//		points.pb(cur);
//	}
//}
//
//double eps = 1e-9;
//
//int cmp(double a, double b){
//	if (fabs(a - b) < eps) return 0;
//	if (a > b) return 1;
//	return -1;
//}
//
//ll stupid(ll S, ll C, ll k){
//	vector<double> point;
//	forn(iter, S){
//		AddSin(point, iter);
//	}
//	forn(iter, C){
//		AddCos(point, iter);
//	}
//	sort(ALL(point));
//	ll ans = 0;
//	int cnt = 1;
//	for(int i = 1; i < sz(point); ++i){
//		if (point[i] == point[i - 1]){
//			cnt++;
//		} else {
//			if (cnt >= k) ans++;
//			cnt = 1;
//		}
//	}
//	if (cnt >= k && sz(point)) ans++;
//	return ans;
//}
//
//void model(){
//	forn(S, 10) forn(C, 10) forn(K, 10){
//		if (K == 0) continue;
//		ll ss = solve(S, C, K);
//		ll st = stupid(S, C, K);
//		if (ss != st){
//			cout << S << " " << C << " " << K << "\n";
//			cout << ss << " " << stupid(S, C, K) << "\n";
//			return;
//		}
//	}
//}
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	//model();
//	int t;
//	scanf("%d", &t);
//	while(t--) cout << solve() << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
