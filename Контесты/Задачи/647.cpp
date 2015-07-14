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

const int maxn = 1 << 18;

int t[maxn];
int mm[1 << 16];
int T = 1 << 16;

void recalc(int v, int l, int r){
	if (l == r) return;
	t[v] = t[2 * v + 1] + t[2 * v + 2];
}

void add(int v, int x, int l, int r, int val){
	if (l == r){
		t[v] += val;
		return;
	}
	int middle = (l + r) >> 1;
	if (x > middle)
		add(2 * v + 2, x, middle + 1, r, val);
	else
		add(2 * v + 1, x, l, middle, val);
	recalc(v, l, r);
}

int getsum(int v, int L, int R, int l, int r){
	if (L <= l && r <= R)
		return t[v];
	if (R < l || r < L)
		return 0;
	int middle = (l + r) >> 1;
	int ls = getsum(2 * v + 1, L, R, l, middle);
	int rs = getsum(2 * v + 2, L, R, middle + 1, r);
	return ls + rs;
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	/*freopen(".in", "r", stdin);
	freopen(".out", "w", stdout);*/
#endif
	int n, m;
	scanf("%d%d", &n, &m);
	forn(i, 1 << 16) mm[i] = T++;
	forn(i, n) add(0, mm[i], 0, (1 << 17) - 1, 1);
	int cnt = (1 << 16) - 1;
	forn(i, m){
		int x;
		scanf("%d", &x);
		x--;
		int ans = getsum(0, 0, mm[x], 0, (1 << 17) - 1);
		printf("%d ", ans);
		add(0, mm[x], 0, (1 << 17) - 1, -1);
		mm[x] = cnt--;
		add(0, mm[x], 0, (1 << 17) - 1, 1);
	}
	printf("\n");
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
#endif
	return 0;
}