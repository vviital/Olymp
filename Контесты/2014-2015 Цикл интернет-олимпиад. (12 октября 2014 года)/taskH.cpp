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
//struct node{
//	// number - 0
//	// + - --- 1
//	// * - 2
//	int type;
//	int val;
//
//	node(){
//
//	}
//
//	node(int type, int val){
//		this->type = type;
//		this->val = val;
//	}
//};
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("oddoreven.in", "r", stdin);
//	freopen("oddoreven.out", "w", stdout);
//#endif
//	string s;
//	vector<node> value;
//	cin >> s;
//	string X1, Y1;
//	cin >> X1 >> Y1;
//	node x(0, 0), y(0, 0);
//	if (X1 == "Odd"){
//		x.val = 1;
//	}
//	if (Y1 == "Odd"){
//		y.val = 1;
//	}
//	for (int i = 0; i < len(s); ++i){
//		if (s[i] == '+' || s[i] == '-' || s[i] == '*'){
//			value.push_back(node(s[i] == '*' ? 2 : 1, 0));
//			continue;
//		}
//		if (s[i] == 'x'){
//			value.push_back(x);
//			continue;
//		}
//		if (s[i] == 'y'){
//			value.push_back(y);
//			continue;
//		}
//		int num = 0;
//		while (i < len(s) && s[i] >= '0' && s[i] <= '9'){
//			num = (num * 10 + s[i] - '0') & 1;
//			i++;
//		}
//		value.push_back(node(0, num));
//		i--;
//	}
//	vector<vector<int> > arr;
//	vector<bool> used(sz(value));
//	int pred = -1;
//	int endd = -1;
//	for (int i = 1; i < sz(value); i += 2){
//		if (value[i].type == 2){
//			if (pred == -1){
//				pred = i;
//			}
//			endd = i;
//		}
//		else {
//			if (pred == -1) continue;
//			for (int iter = pred - 1; iter <= endd + 1; iter++){
//				used[iter] = true;
//			}
//			pred = -1;
//		}
//	}
//	if (pred != -1){
//		for (int i = pred - 1; i < sz(value); i++){
//			used[i] = true;
//		}
//	}
//	vector<int> res;
//	for (int i = 0; i < sz(value); i += 2){
//		if (used[i]){
//			i += 2;
//			int vvv = value[i - 2].val;
//			while (i - 1 < sz(value) && value[i - 1].type == 2){
//				vvv &= value[i].val;
//				i += 2;
//			}
//			i -= 2;
//			res.push_back(vvv);
//			continue;
//		}
//		res.push_back(value[i].val);
//	}
//	int ans = 0;
//	for (int i = 0; i < sz(res); i++){
//		ans ^= res[i];
//	}
//	if (ans & 1){
//		cout << "Odd\n";
//	}
//	else {
//		cout << "Even\n";
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}