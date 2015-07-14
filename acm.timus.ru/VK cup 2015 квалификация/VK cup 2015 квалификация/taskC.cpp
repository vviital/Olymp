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
//void solve(){
//	int m, k;
//	scanf("%d%d", &m, &k);
//	vector<int> a(k);
//	forn(i, sz(a)){
//		scanf("%d", &a[i]);
//	}
//	vector<int> buf = a;
//	vector<pii> tr(m - 1);
//	bool ok = false;
//	int index = -1;
//	int cnt = 0;
//	forn(i, sz(tr)){
//		scanf("%d%d", &tr[i].X, &tr[i].Y);
//		tr[i].X--;
//		if (tr[i].X != -1){
//			a[tr[i].X]--;
//		} else cnt++;
//		if (tr[i].Y == 1 && !ok) ok = true, index = i;
//	}
//	vector<char> ans(sz(a), 'N');
//	forn(i, sz(a)) if (a[i] == 0) ans[i] = 'Y';
//	if (!ok){
//		forn(i, sz(a)){
//			if (a[i] - cnt <= 0) ans[i] = 'Y';
//		}
//	} else {
//		bool fl = true;
//		int cnt1 = 0;
//		int cnt2 = 0;
//		vector<bool> used(sz(a));
//		forn(i, sz(tr)){
//			if (tr[i].Y == 1) fl = false;
//			if (tr[i].X != -1 && fl) buf[tr[i].X]--;
//			if (tr[i].X == -1 && fl) cnt1++;
//			if (tr[i].X == -1 && !fl) cnt2++;
//			if (tr[i].X != -1 && !fl) used[tr[i].X] = i;
//		}
//		pii cond(-1, 1e+9);
//		int innd = tr[index].X;
//		forn(i, sz(a)){
//			if (buf[i] - cnt1 <= 0 && innd != i && !used[i]){
//				ans[i] = 'Y';
//				if (buf[i] < cond.Y) cond = mp(i, buf[i]);
//			}
//		}
//		forn(i, sz(a)){
//			int dif = cnt1 + cnt2 - cond.Y;
//			if (a[i] - dif <= 0) ans[i] = 'Y';
//		}
//	}
//	forn(i, sz(ans)) printf("%c", ans[i]);
//	printf("\n");
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
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		solve();
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
