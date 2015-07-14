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
//const int mod = 1e+9 + 7;
//const int maxn = 110;
//
//struct num{
//	int x;
//
//	num(){
//		x = 0;
//	}
//
//	num(ll x){
//		this->x = x % mod;
//		if (this->x < 0) this->x += mod;
//	}
//
//	num operator + (const num &o) const{
//		return num(x + (ll) o.x);
//	}
//
//	num operator * (const int &o) const{
//		return num(x * (ll) o);
//	}
//
//	num operator - (const num &o) const{
//		return num(x - (ll)o.x);
//	}
//};
//
//struct node{
//	num val;
//	int let[30];
//	bool flag;
//
//	node(){
//		val.x = 0;
//		flag = false;
//		forn(i, 30) let[i] = -1;
//	}
//};
//
//struct bor{
//	vector<node> nodes;
//
//	bor(){
//		nodes.pb(node());
//	}
//
//	void add(string s){
//		int cur = 0;
//		forn(i, len(s)){
//			int let = s[i] - 'a';
//			if (nodes[cur].let[let] == -1){
//				nodes[cur].let[let] = sz(nodes);
//				nodes.pb(node());
//			}
//			cur = nodes[cur].let[let];
//		}
//		nodes[cur].flag = true;
//	}
//};
//
//bor dp[maxn];
//
//bool cmp(const string &a, const string &b){
//	return len(a) < len(b);
//}
//
//void dfs(bor &b, int cur, string s){
//	bool ok = true;
//	for(int i=0; i<26; i++){
//		if (b.nodes[cur].let[i] != -1){
//			ok = false;
//		    dfs(b, b.nodes[cur].let[i], s + (char)(i + 'a'));
//		}
//	}
//	if (ok) cout << s << "\n";
//}
//
//void dfs(bor &f, bor &s, int cur, int dep, int curlen){
//	if (s.nodes[cur].flag) s.nodes[cur].val = s.nodes[cur].val + (f.nodes[cur].val * 26);
//	if (dep == curlen) return;
//	for(int i = 0; i < 26; ++i){
//		if (s.nodes[cur].let[i] != -1){
//			int index = s.nodes[cur].let[i];
//			s.nodes[index].val = s.nodes[index].val + f.nodes[cur].val;
//			dfs(f, s, index, dep + 1, curlen);
//		} else {
//			s.nodes[0].val = s.nodes[0].val + f.nodes[cur].val;
//		}
//	}
//}
//
//num dfs(bor &b, int cur){
//	num ans = 0;
//	for(int i=0; i<26; ++i){
//		if (b.nodes[cur].let[i] != -1){
//			ans = ans + dfs(b, b.nodes[cur].let[i]);
//		}
//	}
//	if (b.nodes[cur].flag) ans = ans + b.nodes[cur].val;
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
//	int n, m;
//	cin >> n >> m;
//	vector<string> ss(n);
//	forn(i, n) cin >> ss[i];
//	sort(ALL(ss), cmp);
//	while(sz(ss)){
//		bool ok = true;
//		for(int i = sz(ss) - 2; i >= 0; --i){
//			int index = ss.back().find(ss[i]);
//			if (index == ss.back().length()) index = -1;
//			if (index != -1) ok = false;
//		}
//		if (ok) dp[0].add(ss.back());
//		ss.pop_back();
//	}
//	for(int i = 1; i <= m; ++i) dp[i] = dp[0];
//	dp[0].nodes[0].val = num(1);
//	for(int i = 1; i <= m; ++i) 
//		dfs(dp[i - 1], dp[i], 0, 0, i);
//	num ans(1);
//	forn(i, m) ans = ans * 26;
//	ans = ans - dfs(dp[m], 0);
//	cout << ans.x << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
