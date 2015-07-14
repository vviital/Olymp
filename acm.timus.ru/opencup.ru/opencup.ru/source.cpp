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
//string s[] = { "John", "David", "Peter", "Robert", "Mark", "Paul", "Patrick", "Jack", "Max", "Alex"};
//
//bool checkDot(string &s){
//	bool ok = true;
//	forn(i, sz(s)){
//		if (s[i] != '.') ok = false;
//	}
//	return ok;
//}
//
//int rom(string &s){
//	if (sz(s) == 1){
//		if (s[0] - '0' >= 1 && s[0] - '0' <= 6) return -1;
//		if (s[0] == 'I') return 1;
//		return 5;
//	}
//	if (sz(s) == 3) return 3;
//	if (s[0] == 'V') return 6;
//	if (s[1] == 'V') return 4;
//	return 2;
//}
//
//
//struct type{
//	int color;
//	int number, typ;
//
//	void read(){
//		char ch;
//		cin >> ch; color = ch;
//		string s;
//		cin >> s;
//
//		if (checkDot(s)){
//			number = sz(s);
//			typ = 0;
//			return;
//		}
//
//		int r = rom(s);
//		if (r != -1) {
//			number = r;
//			typ = 1;
//			return;
//		}
//
//		number = s[0] - '0';
//		typ = 2;
//	}
//};
//
//int prime[10];
//
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
//	prime[2] = prime[3] = prime[5] = 1;
//
//	vector<type> t(3);
//	forn(i, 3) t[i].read();
//
//	vector<string> answer;
//
//	int cnt = 0;
//	forn(i, 3) cnt += t[i].typ == 0 ? 1 : 0;
//	if (cnt == 3) answer.pb(s[0]);
//
//	cnt = 0;
//
//	forn(i, 3) cnt += t[i].typ == 1 ? 1 : 0;
//	if (!cnt) answer.pb(s[1]);
//
//	cnt = 0;
//
//	forn(i, 3) cnt += t[i].color == 'W' ? 1 : 0;
//	if (cnt == 3) answer.pb(s[2]);
//
//	cnt = 0;
//
//	forn(i, 3) cnt += t[i].color == 'W' || t[i].color == 'B' ? 1 : 0;
//	if (cnt == 3) answer.pb(s[3]);
//
//	cnt = 0;
//
//	forn(i, 3){
//		if (t[i].number % 2) cnt += t[i].color == 'W';
//		else cnt += t[i].color == 'B';
//	}
//	if (cnt == 3) answer.pb(s[4]);
//
//	cnt = 0;
//
//	int cnt1 = 0;
//
//	forn(i, 3) {
//		if (prime[t[i].number]){
//			if (t[i].typ == 2) cnt++;
//			else cnt1++;
//		} else {
//			if (t[i].typ != 2) cnt++;
//			else cnt1++;
//		}
//	}
//
//	bool ok = true;
//	forn(i, 3){
//		if (prime[t[i].number]){
//			if (t[i].typ != 2) ok = false;
//		}
//		else if (t[i].typ == 2) ok = false;
//	}
//	if (cnt == 3) {
//		answer.pb(s[5]);
//	}
//
//	cnt = cnt1 = 0;
//	int color = 0;
//
//	forn(i, 3){
//		if (i == 0) cnt = 1, color = t[i].color;
//		else if (color != t[i].color) cnt++;
//	}
//
//	if (cnt == 1 && color != 'B' && color != 'W') answer.pb(s[6]);
//
//	cnt = color = 0;
//
//	forn(i, 3){
//		if (t[i].typ == 1){
//			cnt += t[i].color != 'Y';
//		}
//	}
//	if (cnt == 0) answer.pb(s[7]);
//
//	cnt = 0;
//
//	vector<int> col;
//
//	forn(i, 3) col.pb(t[i].color);
//
//	sort(ALL(col));
//	col.erase(unique(ALL(col)), col.end());
//
//	if (sz(col) == 3) answer.pb(s[8]);
//
//	vector<int> tt(3);
//	ok = true;
//	forn(i, 3) {
//		int ty = t[i].typ;
//		color = t[i].color;
//
//		if (tt[ty] == 0) tt[ty] = color;
//		else if (tt[ty] != color) ok = false;
//	}
//
//	col.clear();
//	col.resize(200);
//	forn(i, 3) col[tt[i]]++;
//	forn(i, sz(col)) if (i == 0) continue; else if (col[i] > 1) ok = false;
//
//	if (ok) answer.pb(s[9]);
//
//	forn(i, sz(answer)) cout << answer[i] << " ";
//	cout << "\n";
//
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
