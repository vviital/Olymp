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

double arr[] = {8.17, 1.49, 2.78, 4.25, 12.7, 2.23, 2.02, 6.09, 6.97, 0.15, 0.77, 4.03, 2.41, 6.75, 7.51, 1.93, 0.01, 5.99, 6.33, 9.06, 2.76, 0.98, 2.36, 0.15, 1.97, 0.07};
double narr[26];

double sqr(double x){
	return x * x;
}

vector<int> mas;
vector<int> mask;

int getval(char ch){
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	return ch - 'A' + 10;
}

int parse(string &s, int cnt){
	return getval(s[cnt]) * 16 + getval(s[cnt + 1]);
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin);
	/*freopen("output.txt", "w", stdout);*/
#endif
	string s, m;
	getline(cin, s);
	getline(cin, m);
	mas.resize(len(s) / 2);
	for(int i = 0; i < len(s); i += 2)
		mas[i / 2] = parse(s, i);
	mask.resize(sz(mas));
	for(int i = 0; i < len(m); i += 2){
		mask[i / 2] = parse(m, i);
	}
	for(int i = len(m); i < sz(mas); i++){
		mask[i] = mask[i - len(m)];
	}
	forn(i, sz(mask)){
		int ch = (mask[i] ^ mas[i]);
		//if (ch > 127) ch -=;
		cout << (unsigned char)ch;
	}
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
