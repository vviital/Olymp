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
//const int maxn = 1e+7;
//
//ll tree[maxn];
//vector<int> mas;
//vector<ll> preds;
//vector<ll> ans;
//
//void sett (ll i, ll value)
//{
//	for (; i < maxn; i = (i | (i+1)))
//		tree[i] = min(tree[i], value);
//}
//
//ll getvalue(ll r){
//	ll res = 1e+18;
//	for (; r >= 0; r = (r & (r+1)) - 1)
//		res = min(tree[r], res);
//	return res;
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
//	forn(i, maxn) tree[i] = 1e+18;
//	int n, m;
//	scanf("%d%d", &n, &m);
//	mas.resize(n);
//	forn(i, n){
//		scanf("%d", &mas[i]);
//	}
//	vector<pair<pii, int> > re;
//	forn(i, m){
//		int l, r;
//		scanf("%d%d", &l, &r);
//		re.pb(mp(mp(l - 1, r - 1), i));
//	}
//	sort(ALL(re));
//	reverse(ALL(re));
//	int pred = 1e+9;
//	map<int, int> mm;
//	vector<int> dist(sz(mas));
//	for(int i=sz(mas) - 1; i>=0; --i){
//		map<int, int>::iterator it = mm.find(mas[i]);
//		if (it != mm.end()){
//			dist[i] = (*it).Y;
//		}
//		mm[mas[i]] = i;
//	}
//	int pointer = 0;
//	ans.resize(sz(re));
//	for(int i=sz(mas) - 1; i>=0; --i){
//		if (dist[i] != 0){
//			sett(dist[i], dist[i] - i);
//		}
//		for(; pointer < sz(re) && re[pointer].X.X == i; pointer++){
//			int index = re[pointer].Y;
//			ans[index] = getvalue(re[pointer].X.Y);
//			if (ans[index] >= 1e+9) ans[index] = -1; 
//		}
//	}
//	forn(i, sz(ans)) printf("%d\n", (int)ans[i]);
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
