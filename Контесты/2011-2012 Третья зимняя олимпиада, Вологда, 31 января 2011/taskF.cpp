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
//vector<string> split(string s){
//	vector<string> ss;
//	for (int i = 0; i < len(s); i++){
//		if (s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+'){
//			string buf(1, s[i]);
//			ss.push_back(buf);
//			continue;
//		}
//		if (i < sz(s) && s[i] >= '0' && s[i] <= '9'){
//			string temp;
//			while (s[i] >= '0' && s[i] <= '9'){
//				temp += s[i];
//				i++;
//			}
//			i--;
//			ss.push_back(temp);
//			continue;
//		}
//		string temp;
//		while (i < sz(s) && !(s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+')){
//			temp += s[i];
//			i++;
//		}
//		i--;
//		ss.push_back(temp);
//	}
//	return ss;
//}
//
//void ini(string s, string b){
//	cout << s << " = " << b << "\n";
//}
//
//void ini(string s, string a, string op, string b){
//	cout << s << " = " << a << " " << op << " " << b << "\n";
//}
//
//pii check(int l, int r, vector<string> &ss){
//	pii ans(-1, -1);
//	int bal = 0;
//	for (int i = l; i <= r; i++){
//		if (ss[i] == "("){
//			if (ans.X == -1) ans.X = i;
//			bal++;
//		}
//		if (ss[i] == ")"){
//			ans.Y = i;
//			bal--;
//			if (bal == 0) break;
//		}
//	}
//	return ans;
//}
//
//string rec(int l, int r, vector<string> &ss){
//	string temp;
//	for (int i = 0; i < 10; i++)
//		temp += rand() % 26 + 'a';
//	if (l > r){
//		ini(temp, "0");
//		return temp;
//	}
//	pii ttt = check(l, r, ss);
//	if (ttt.X == -1){
//		ini(temp, ss[l]);
//		for (int i = l + 1; i <= r; i += 2){
//			ini(temp, temp, ss[i], ss[i + 1]);
//		}
//	}
//	else {
//		if (ttt.X - 2 >= l){
//			ini(temp, rec(l, ttt.X - 2, ss));
//		}
//		else {
//			ini(temp, "0");
//		}
//		if (ttt.X - 1 >= l){
//			ini(temp, temp, ss[ttt.X - 1], rec(ttt.X + 1, ttt.Y - 1, ss));
//		}
//		else {
//			ini(temp, temp, "+", rec(ttt.X + 1, ttt.Y - 1, ss));
//		}
//		if (ttt.Y + 1 <= r){
//			ini(temp, temp, ss[ttt.Y + 1], rec(ttt.Y + 2, r, ss));
//		}
//	}
//	return temp;
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	/*freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);*/
//#endif
//	string s;
//	getline(cin, s);
//	bool p = false;
//	forn(i, len(s)){
//		if (s[i] == '{' || s[i] == '}')
//			p = true;
//	}
//	vector<string> ss = split(s);
//	string ans = rec(0, sz(ss) - 1, ss);
//	cout << "print " << ans << "\n";
//	/*return 0;
//	if (p){
//		vector<string> ss = split(s);
//		string ans = rec(0, sz(ss) - 1, ss);
//		cout << "print " << ans << "\n";
//	}
//	else {
//		string ttt = "hsdtlsgdi";
//		vector<string> ss = split(s);
//		ini(ttt, ss[0]);
//		for (int i = 1; i < sz(ss); i += 2){
//			ini(ttt, ttt, ss[i], ss[i + 1]);
//		}
//		cout << "print " << ttt << "\n";
//	}*/
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//	return 0;
//}