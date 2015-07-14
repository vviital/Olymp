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
//const int mod = 1e+9 + 7;
//const int p = 123;
//const int maxn = 1e+5 + 100;
//
//int pows[maxn];
//int hs[11][maxn];
//
//void precalc(){
//	pows[0] = 1;
//	for (int i = 1; i < maxn; i++)
//		pows[i] = pows[i - 1] * (ll)p % mod;
//}
//
//void make_hash(int h[maxn], string &s){
//	forn(i, len(s)){
//		if (i == 0) h[i] = s[i] - 'a' + 1;
//		else h[i] = (h[i - 1] * (ll)p + s[i] - 'a' + 1) % mod;
//	}
//}
//
//int gethash(int h[maxn], int l, int r){
//	if (l == 0) return h[r];
//	int value = (h[r] - h[l - 1] * (ll)pows[r - l + 1]) % mod;
//	if (value < 0) value += mod;
//	return value;
//	return l ? ((h[r] - h[l - 1] * (ll)pows[r - l + 1]) % mod + mod) % mod: h[r];
//}
//
//bool cmp(const string &a, const string &b){
//	return len(a) < len(b);
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("substr.in", "r", stdin);
//	freopen("substr.out", "w", stdout);
//#endif
//	precalc();
//	int n;
//	cin >> n;
//	vector<string> s(n);
//	int l = -1, r = 1e+9;
//	forn(i, n) {
//		cin >> s[i];
//	}
//	sort(ALL(s), cmp);
//	forn(i, n){
//		r = min(r, len(s[i]));
//		make_hash(hs[i], s[i]);
//	}
//	r++;
//	while (r - l > 1){
//		int middle = (l + r) >> 1;
//		vector<set<int> > ss(n);
//		forn(iter, n){
//			forn(from, len(s[iter])){
//				int to = from + middle - 1;
//				if (to >= len(s[iter])) break;
//				ss[iter].insert(gethash(hs[iter], from, to));
//			}
//		}
//		bool ok = false;
//		forn(from, len(s[0])){
//			int to = from + middle - 1;
//			if (to >= len(s[0])) break;
//			int value = gethash(hs[0], from, to);
//			bool good = true;
//			forn(iter, n){
//				if (!ss[iter].count(value)){
//					good = false;
//				}
//			}
//			if (good) ok = good;
//		}
//		if (ok)
//			l = middle;
//		else
//			r = middle;
//	}
//	if (l == -1){
//		cout << "\n";
//		return 0;
//	}
//	vector<set<int> > ss(n);
//	forn(iter, n){
//		forn(from, len(s[iter])){
//			int to = from + l - 1;
//			if (to >= len(s[iter])) break;
//			ss[iter].insert(gethash(hs[iter], from, to));
//		}
//	}
//	forn(from, len(s[0])){
//		int to = from + l - 1;
//		int value = gethash(hs[0], from, to);
//		bool good = true;
//		forn(iter, n){
//			if (!ss[iter].count(value)){
//				good = false;
//			}
//		}
//		if (good){
//			for (int i = from; i <= to; i++){
//				putchar(s[0][i]);
//			}
//			putchar('\n');
//			return 0;
//		}
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
