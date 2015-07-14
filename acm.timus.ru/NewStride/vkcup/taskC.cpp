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


int xp, yp, xv, yv;

void move_policarp(){
	int binx = xp - xv;
	int biny = yp - yv;
	if (binx >= biny && !(xp - 1 == xv && yp == yv) && xp >= 1){
		xp--;
		return;
	}
	if (biny >= binx && !(xp == xv && yp - 1 == yv) && yp >= 1){
		yp--;
		return;
	}
	if (!(xp - 1 == xv && yp == yv) && xp >= 1){
		xp--;
		return;
	}
	if (biny <= binx && !(xp == xv && yp - 1 == yv) && yp >= 1){
		yp--;
		return;
	}
}

void move_valiliy(){
	if (!(xp == xv - 1 && yp == yv - 1) && xv >= 1 && yv >= 1){
		xv--;
		yv--;
		return;
	}
	if (!(xp == xv - 1 && yp == yv) && xv >= 1 && yv >= 0){
		xv--;
		return;
	}
	if (!(xp == xv && yp == yv - 1) && xv >= 0 && yv >= 1){
		yv--;
		return;
	}
}

int solve(){
	while(true){
		move_policarp();
		if (xp == 0 && yp == 0) break;
		move_valiliy();
		if (xv == 0 && yv == 0) break;
	}
	if (xp == 0 && yp == 0)
		return 0;
	else
		return 1;
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin);
	/*freopen("output.txt", "w", stdout);*/
#endif
	cin >> xp >> yp >> xv >> yv;
	for(int bxp = 0; bxp <= 7; bxp++)
		for(int byp = 0; byp <= 7; byp++){
			int bxv = xv;
			int byv = yv;
			xp = bxp;
			yp = byp;
			cout << xp << " " << yp << " ";
			int ans = solve();
			if (ans == 0){
				cout << "Polycarp\n";
			} else {
				cout << "Vasiliy\n";
			}
			xv = bxv;
			yv = byv;
		}
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
