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


ll c, hr, hb, wr, wb;

ll stress(int c, int hr, int hb, int wr, int wb){
	int ans = 0;
	for(int i=0; i <= c / wr; i++){
		int res = c - i * wr;
		for(int j = 0; j <= res / wb; j++){
			ans = max(ans, i * hr + j * hb);
		}
	}
	return ans;
}

ll calc(ll x){
	ll res = c - x * wr;
	res /= wb;
	ll ans = x * hr;
	ans += res * hb;
	return ans;
}

ll calc1(ll x){
	ll res = c - x * wb;
	res /= wr;
	ll ans = x * hb;
	ans += res * hr;
	return ans;
}

ll solve(ll c, ll hr, ll hb, ll wr, ll wb){

}

ll solve(){
	for(ll d = 1; d <= c;){
		long long nd = c / (c / d);

		d = nd + 1;
	}
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin);
	/*freopen("output.txt", "w", stdout);*/
#endif

	/*for(::c = 10; c <= 20; c++){
		for(::hr = 1; hr <= 10; hr++)
			for(::hb = 1; hb <= 10; hb++)
				for(::wr = 1; wr <= 10; wr++)
					for(::wb = 1; wb <= 10; wb++){
						ll ans1 = solve();
						swap(hr, hb);
						swap(wr, wb);
						ll ans2 = stress(c, hr, hb, wr, wb);
						if (ans1 != ans2){
							cout << c << "\n";
							cout << hr << "\n";
							cout << hb  << "\n";
							cout << wr << "\n";
							cout << wb << "\n";
							cout << ans1 << "\n";
							cout << ans2 << "\n";
							return 0;
						}
					}
	}
	return 0;*/
	cin >> c >> hr >> hb >> wr >> wb;
	cout << solve() << "\n";
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
