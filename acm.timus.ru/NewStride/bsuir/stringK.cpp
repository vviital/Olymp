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
//struct node{
//	bool term;
//	int let[96];
//
//	node(){
//		term = false;
//		ms1(let);
//	}
//};
//
//const int maxn = 1e+5 + 10000;
//
//struct bor{
//	node nodes[maxn];
//	int size;
//
//	bor(){
//		this->size = 1;
//	}
//
//	inline void add(string &s){
//		int cur = 0;
//		forn(i, len(s)){
//			int let = s[i] - 32;
//			if (nodes[cur].let[let] == -1)
//				nodes[cur].let[let] = size++;
//			cur = nodes[cur].let[let];
//		}
//		nodes[cur].term = true;
//	}
//};
//
//inline bool find(bor &b, string &s, int pos){
//	int cur = 0;
//	while(pos < len(s)){
//		int let = s[pos++];
//		if (b.nodes[cur].term) return true;
//		if (b.nodes[cur].let[let] == -1) return false;
//		cur = b.nodes[cur].let[let];
//	}
//	return b.nodes[cur].term;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("console.in", "r", stdin);
//	freopen("console.out", "w", stdout);
//#endif
//	int n;
//	ios_base::sync_with_stdio(false);
//	cin >> n;
//	string s;
//	bor b;
//	getline(cin, s);
//	forn(i, n){
//		getline(cin, s);
//		b.add(s);
//	}
//	while(getline(cin, s)){
//		bool ok = false;
//		forn(i, len(s)) s[i] -= 32;
//		forn(i, len(s)){
//			ok = find(b, s, i);
//			if (ok) break;
//		}
//		if (ok) {
//			forn(i, len(s)) putchar(s[i] + 32);
//			putchar('\n');
//		}
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
