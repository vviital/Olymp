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
//struct times{
//	ll h, m, s;
//
//	times() {
//		h = m = s = 0;
//	}
//
//	times(ll h, ll m, ll s){
//		this->h = h;
//		this->m = m;
//		this->s = s;
//	}
//
//	times(ll t){
//		ll per = 1e+6;
//		h = t / (per * per);
//		t %= (per * per);
//		m = t / per;
//		s = t % per;
//	}
//
//	void print(){
//		cout << h << " " << m << " " << s << "\n";
//	}
//	void scan(){
//		int h, m, s;
//		scanf("%d%d%d", &h, &m, &s);
//		this->h = h;
//		this->m = m;
//		this->s = s;
//	}
//
//	ll makeLL(){
//		ll per = 1e+6;
//		return h * per * per + m * per + s;
//	}
//};
//
//
//ll getsum(vector<ll> &sum, int l, int r){
//	if (l == 0) return sum[r];
//	return sum[r] - sum[l - 1];
//}
//
//void solve(){
//	ll n;
//	cin >> n;
//	vector<ll> t(n);
//	forn(i, n){
//		times buf;
//		buf.scan();
//		t[i] = buf.makeLL();
//	}
//	sort(ALL(t));
//	vector<ll> sum(n), need(n);
//	ll loop = 1e+6;
//	ll maxtime = 12 * loop * loop;
//	forn(i, n) need[i] = maxtime - t[i];
//	forn(i, n){
//		if (i == 0) sum[i] = need[i];
//		else sum[i] = sum[i - 1] + need[i];
//	}
//	ll ans = 1e+18;
//	ll pred = 0;
//	forn(i, n){
//		ll cur = 0;
//		if (i != n - 1) cur = getsum(sum, i + 1, n - 1) + t[i] * (n - (i + 1));
//		if (i != 0){
//			pred += i * (t[i] - t[i-1]);
//		}
//		cur += pred;
//		ans = min(ans, cur);
//	}
//	times anst(ans);
//	anst.print();
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
