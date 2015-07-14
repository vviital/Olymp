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

double arr[14][14];

void fun(){
	
}

void read(){
	forn(i, 12) forn(j, 13) cin >> arr[i][j];
}

void print(){
	forn(i, 12){
		forn(j, 13){
			cout << fixed << setprecision(2) << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
}

void gauss(){
	for(int i=0; i<12; i++){
		if (i == 0){
			double cur = arr[i][0];
			forn(j, 13) arr[i][j] /= cur;
			continue;
		}
		double cur = arr[i][i-1];
		forn(j, 13){
			arr[i][j] /= cur;
		}
		forn(j, 13) arr[i][j] -= arr[i-1][j];
		cur = arr[i][i];
		forn(j, 13) arr[i][j] /= cur;
	}
	print();
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin);
	/*freopen("output.txt", "w", stdout);*/
#endif
	read();
	gauss();
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
