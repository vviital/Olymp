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
//const int maxn = 5e+4 + 100;
//int arr[maxn];
//int revindex[maxn];
//int n;
//const int mod = 1e+9 + 7;
//int t[1300][maxn];
//
//int sum(int r, int index)
//{
//	int result = 0;
//	for (; r >= 0; r = (r & (r + 1)) - 1)
//		result += t[index][r];
//	return result;
//}
//
//void add(int i, int delta, int index)
//{
//	for (; i < n; i = (i | (i + 1)))
//		t[index][i] += delta;
//}
//
//int sum(int l, int r, int index)
//{
//	return sum(r, index) - sum(l - 1, index);
//}
//
//bool isprime(int x){
//	bool good = true;
//	for (int i = 2; i * (ll)i <= x; i++){
//		if (x % i == 0)
//			return false;
//	}
//	return good;
//}
//
//void precalc(){
//	int T = 0;
//	for (int i = 2; i < maxn; i++){
//		if (isprime(i)){
//			revindex[i] = T++;
//		}
//	}
//}
//
//vector<pii> factor(int x){
//	vector<pii> ans;
//	for (int i = 2; i * (ll)i <= x; i++){
//		if (x % i == 0){
//			int cnt = 0;
//			while (x % i == 0){
//				cnt++;
//				x /= i;
//			}
//			ans.push_back(mp(i, cnt));
//		}
//	}
//	if (x > 1){
//		ans.push_back(mp(x, 1));
//	}
//	return ans;
//}
//
//void addnumber(int x, int pos){
//	vector<pii> fact = factor(x);
//	for (int i = 0; i < sz(fact); i++){
//		int index = revindex[fact[i].X];
//		add(pos, fact[i].Y, index);
//	}
//}
//
//void delnumber(int pos){
//	int x = arr[pos];
//	vector<pii> fact = factor(x);
//	for (int i = 0; i < sz(fact); i++){
//		int index = revindex[fact[i].X];
//		add(pos, -fact[i].Y, index);
//	}
//}
//
//void update(int index, int x){
//	delnumber(index);
//	arr[index] = x;
//	addnumber(x, index);
//}
//
//int query(int l, int r){
//	int ans = 1;
//	for (int i = 0; i < 1300; i++){
//		int cur = sum(l, r, i);
//		ans = ans * (ll)(cur + 1) % mod;
//	}
//	return ans;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("divisors.in", "r", stdin);
//	freopen("divisors.out", "w", stdout);
//#endif
//	precalc();
//	cin >> n;
//	for (int i = 0; i < n; i++){
//		int temp;
//		cin >> temp;
//		update(i, temp);
//	}
//	int q;
//	cin >> q;
//	for (int i = 0; i < q; i++){
//		int x, l, r;
//		cin >> x >> l >> r;
//		if (x == 0){
//			l--;
//			update(l, r);
//		}
//		else {
//			l--, r--;
//			int ans = query(l, r);
//			cout << ans << "\n";
//		}
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}