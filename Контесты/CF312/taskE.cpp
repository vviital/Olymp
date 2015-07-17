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

#ifndef _DEBUG
	const int maxn = 1 << 17;
#else
	const int maxn = 100;
#endif

struct tree{
	int t[2 * maxn];
	int add[2 * maxn];

	tree(){
		forn(i, 2 * maxn) add[i] = -1;
	}

	inline void push(int v, int L, int R){
		if (add[v] != -1){
			if (L != R) {
				add[2 * v + 1] = add[v];
				add[2 * v + 2] = add[v];
			}
			t[v] = (R - L + 1) * add[v];
			add[v] = -1;
		}
	}

	inline void recalc(int v){
		t[v] = t[2 * v + 1] + t[2 * v + 2];
	}

	inline void build(int v, int L, int R, vector<int> &arr, int x){
		if (L == R){
			if (x == arr[L])
				t[v] = 1;
			return;
		}
		int middle = (L + R) >> 1;
		build(2 * v + 1, L, middle, arr, x);
		build(2 * v + 2, middle + 1, R, arr, x);
		recalc(v);
	}

	inline int query(int v, int L, int R, int l, int r){
		push(v, l, r);
		if (r < L || R < l)
			return 0;
		if (L <= l && r <= R){
			return t[v];
		}
		int middle = (l + r) >> 1;
		int q1 = query(2 * v + 1, L, R, l, middle);
		int q2 = query(2 * v + 2, L, R, middle + 1, r);
		return q1 + q2;
	}

	inline void update(int v, int L, int R, int l, int r, int val){
		push(v, l, r);
		if (r < L || R < l)
			return;
		if (L <= l && r <= R){
			add[v] = val;
			push(v, l, r);
			return;
		}
		int middle = (l + r) >> 1;
		update(2 * v + 1, L, R, l, middle, val);
		update(2 * v + 2, L, R, middle + 1, r, val);
		recalc(v);
	}
};

tree t[26];

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	/*freopen("trans.in", "r", stdin);
	freopen("trans.out", "w", stdout);*/
#endif
	ios_base::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<int> ss;
	forn(iter, len(s)) 
		ss.push_back(s[iter] - 'a');
	forn(iter, 26) 
		t[iter].build(0, 0, len(s) - 1, ss, iter);
	forn(iter, q){
		int i, j, k;
		cin >> i >> j >> k;
		i--, j--;
		vector<int> curval(26);
		int all = j - i + 1;
		for(int let = 0; let < 26 && all; let++){
			curval[let] = t[let].query(0, i, j, 0, len(s) - 1);
			all -= curval[let];
			if (curval[let])
				t[let].update(0, i, j, 0, len(s) - 1, 0);
		}
		if (!k){
			int pointer = i;
			for (int let = 25; let >= 0; --let){
				if (curval[let]){
					t[let].update(0, pointer, pointer + curval[let] - 1, 0, len(s) - 1, 1);
					pointer += curval[let];
				}
			}
		} else {
			int pointer = i;
			forn(let, 26){
				if (curval[let]){
					t[let].update(0, pointer, pointer + curval[let] - 1, 0, len(s) - 1, 1);
					pointer += curval[let];
				}
			}
		}
	}
	forn(iter, n){
		forn(let, 26){
			int val = t[let].query(0, iter, iter, 0, len(s) - 1);
			if (val){
				s[iter] = 'a' + let;
				break;
			}
		}
	}
	cout << s << "\n";
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
#endif
	return 0;
}