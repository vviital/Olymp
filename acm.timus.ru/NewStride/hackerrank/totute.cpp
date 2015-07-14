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

const int maxn = 2e+6 + 100;
map<ll, ll> primes;
int prime[maxn];
int pred[maxn];

void precalc(){
	for(int i = 2; i < maxn; i++){
		if (!prime[i])
			for(ll j = i * (ll)i; j < maxn; j += i)
				prime[j] = true, pred[j] = i;
	}
}

void add(int n, int times){
	while(pred[n]){
		primes[pred[n]] += times;
		n /= pred[n];
	}
	if (n != 1) primes[n] += times;
}

void solve(){
	primes.clear();
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	add(a, b);
	add(c, d);
	add(e, f);
	add(g, h);
	int cnt = 0;
	int cur = 0;
	if (sz(primes)){
		map<ll, ll>::iterator it = primes.end();
		--it;
		cnt = max(cnt, (int)(*it).Y);
	}
	printf("%d\n", cnt);
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin);
	/*freopen("output.txt", "w", stdout);*/
#endif
	precalc();
	int t;
	scanf("%d", &t);
	while(t--) solve();
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
