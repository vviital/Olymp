#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cassert>

using namespace std;

typedef long long ll;
typedef double db;
typedef long double ldb;
typedef string str;

#define forn(i, n) for(int i = 0; i < n; ++i)
#define INF 1e+9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define X first
#define Y second
#define ms(x) memset(x, 0, sizeof(x))
#define ms1(x) memset(x, -1, sizeof(x))
#define sz(x) ( (int) x.size() )
#define len(x) ( (int) x.length() )
#define ALL(x) x.begin(), x.end()
#define pii pair<int, int>
#define pdd pair<double, double>

const int maxn = 4 * (1e+5);

vector<int> arr;

int mm[maxn];
map<ll, int> pows;

ll calc(ll a, ll b){
	if (a < b) swap(a, b);
	int ans = 0;
	if (a % b == 0){
		ll div = a / b;
		if (pows.count(div)) return pows[div];
	}
	while (a != b){
		if (a < b) swap(a, b);
		a >>= 1;
		ans++;
	}
	return ans;
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	/*freopen("trans.in", "r", stdin);
	freopen("trans.out", "w", stdout);*/
#endif
	int n;
	cin >> n;
	arr.resize(n);
	forn(i, n) cin >> arr[i];
	sort(ALL(arr));
	ll best = 1e+18;
	for (int i = 0; i < 50; i++)
		pows[1LL << i] = i;
	forn(i, n){
		int val = arr[i];
		while (val){
			if (val % 2)
				mm[val]++;
			val /= 2;
		}
	}
	for (int i = 0; i < maxn; i++){
		if (mm[i] == n){
			for (int pp = 0; pp <= 21; pp++){
			ll cur = 0;
			ll vvv = i * (1LL << pp);
			if (vvv > 1e+6) break;
				forn(j, n) {
					cur += calc(arr[j], vvv);
				}
				best = min(cur, best);
			}
		}
	}
	cout << best << "\n";
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
#endif
	return 0;
}