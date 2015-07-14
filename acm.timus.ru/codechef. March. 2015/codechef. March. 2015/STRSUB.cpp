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
//const int maxn = 2e+5;
//
//struct node{
//	ll a, b, sum;
//
//	node() { }
//
//	node(ll a, ll b, ll sum){
//		this->a = a;
//		this->b = b;
//		this->sum = sum;
//	}
//};
//
//node tree[4 * maxn];
//
//void build(int vertex, int l, int r){
//	if (l == r){
//		tree[vertex] = node(0, 0, 0);
//		return;
//	}
//	int middle = (l + r) >> 1;
//	build(2 * vertex + 1, l, middle);
//	build(2 * vertex + 2, middle + 1, r);
//	tree[vertex] = node(0, 0, 0);
//}
//
//void push(int vertex, int l, int r){
//	if (l == r){
//		tree[vertex].sum += tree[vertex].a;
//		tree[vertex].a = 0;
//		tree[vertex].b = 0;
//		return;
//	}
//	tree[2 * vertex + 1].a += tree[vertex].a;
//	int middle = (r + l) >> 1;
//	tree[2 * vertex + 2].a += tree[vertex].a + (middle - l + 1) * tree[vertex].b;
//	tree[2 * vertex + 1].b += tree[vertex].b;
//	tree[2 * vertex + 2].b += tree[vertex].b;
//	tree[vertex].sum += (2 * tree[vertex].a + tree[vertex].b * (r - l)) >> 1LL;
//	tree[vertex].a = 0;
//	tree[vertex].b = 0;
//}
//
//void recalc(int vertex, int l, int r){
//	tree[vertex].sum = tree[2 * vertex + 1].sum + tree[2 * vertex + 2].sum;
//}
//
//void modify(int vertex, int l, int r, int L, int R, ll a, ll b){
//	push(vertex, l, r);
//	if (l > R || r < L) return;
//	if (L <= l && r <= R){
//		tree[vertex].a = a + (l - L) * b;
//		tree[vertex].b = b;
//		push(vertex, l, r);
//		return;
//	}
//	int middle = (l + r) >> 1;
//	modify(2 * vertex + 1, l, middle, L, R, a, b);
//	modify(2 * vertex + 2, middle + 1, r, L, R, a, b);
//	recalc(vertex, l, r);
//}
//
//ll getsum(int vertex, int l, int r, int v){
//	push(vertex, l, r);
//	if (l == r) return tree[vertex].sum;
//	int middle = (l + r) >> 1;
//	if (v <= middle) return getsum(2 * vertex + 1, l, middle, v);
//	else return getsum(2 * vertex + 2, middle + 1, r, v);
//}
//
//int getsum(vector<int> &sum, int l, int r){
//	if (l == 0) return sum[r];
//	return sum[r] - sum[l - 1];
//}
//
//void solve(){
//	int k, n, q;
//	scanf("%d%d%d", &k, &n, &q);
//	swap(n, k);
//	string s;
//	cin >> s;
//	vector<pair<pii, int> > re;
//	vector<ll> ans(q);
//	vector<int> sum(n);
//	forn(iter, sz(s)){
//		if (iter == 0) sum[iter] = s[iter] == '1';
//		else sum[iter] = sum[iter - 1] + (s[iter] == '1');
//	}
//	forn(iter, q){
//		int l, r;
//		scanf("%d%d", &l, &r);
//		l--, r--;
//		re.pb(mp(mp(l, r), iter));
//	}
//	sort(ALL(re));
//	reverse(ALL(re));
//	build(0, 0, sz(s) - 1);
//	int pointer = 0;
//	for(int l = sz(s) - 1; l >= 0; l--){
//		int left = l, right = sz(s);
//		while(right - left > 1){
//			int middle = (right + left) >> 1;
//			int s1 = getsum(sum, l, middle);
//			int s2 = (middle - l + 1) - s1;
//			if (s1 <= k && s2 <= k) left = middle;
//			else right = middle;
//		}
//		modify(0, 0, sz(s) - 1, l, left, 1, 1);
//		if (left + 1 <= sz(s) - 1) modify(0, 0, sz(s) - 1, left + 1, sz(s) - 1, left - l + 1, 0);
//		for(; pointer < sz(re) && re[pointer].X.X == l; pointer++) {
//			int index = re[pointer].Y;
//			ans[index] = getsum(0, 0, sz(s) - 1, re[pointer].X.Y);
//		}
//	}
//	forn(iter, sz(ans)) printf("%lld\n", ans[iter]);
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
