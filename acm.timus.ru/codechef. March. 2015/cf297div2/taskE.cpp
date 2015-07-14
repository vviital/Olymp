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
//ll n, k, s;
//
//ll getFact(ll val){
//	ll ans = 1;
//	for(int i=1; i<=val; ++i){
//		ans *= i;
//		if (ans >= 1e+17) return 1e+17;
//	}
//	return ans;
//}
//
//ll current[100];
//int ssz = 0;
//
//vector<map<ll, int> > solve(vector<ll> &w, vector<ll> fact){
//	vector<map<ll, int> > ans;
//	ans.resize(sz(w) + 1);
//	int bound = 1 << sz(w);
//	forn(mask, bound){
//		int cnt = ssz = 0;
//		ll sum = 0;
//		forn(j, sz(w)){
//			if (mask & (1 << j)){
//				current[ssz++] = w[j];
//			} else {
//				cnt++;
//				sum += fact[j];
//			}
//		}
//		if (sum > s) continue;
//		int bound2 = 1 << ssz;
//		forn(mask2, bound2){
//			ll cursum = 0;
//			forn(j, ssz){
//				if (mask2 & (1 << j)){
//					cursum += current[j];
//				}
//			}
//			if (cursum + sum > s) continue;
//			ans[cnt][cursum + sum]++;
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
//	cin >> n >> k >> s;
//	int l = (n + 1) / 2;
//	int r = n - l;
//	vector<int> all(n);
//	forn(i, n) cin >> all[i];
//	vector<ll> lv(l), lf(l), rv(r), rf(r);
//	for(int i=0; i<l; i++){
//		lv[i] = all[i];
//		lf[i] = getFact(all[i]);
//	}
//	for(int i=l; i<n; i++){
//		rv[i - l] = all[i];
//		rf[i - l] = getFact(all[i]);
//	}
//	vector<map<ll, int> > lp = solve(lv, lf);
//	vector<map<ll, int> > rp = solve(rv, rf);
//	ll ans = 0;
//	for(int lk = 0; lk <= min(k, (ll)sz(lp) - 1); lk++){
//		for(map<ll, int>::iterator it = lp[lk].begin(); it != lp[lk].end(); ++it){
//			pair<ll, int> cur = *it;
//			ll need = s - cur.X;
//			int res = min(k - lk, (ll)sz(rp) - 1);
//			for(int add = 0; add <= res; add++){
//				map<ll, int>::iterator findIt = rp[add].find(need);
//				if (findIt == rp[add].end()) continue;
//				ans += (*findIt).Y * (ll) cur.Y;
//			}
//		}
//	}
//	cout << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
