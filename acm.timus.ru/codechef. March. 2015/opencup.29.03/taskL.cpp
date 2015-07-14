//#pragma comment(linker, "/stack:32000000")
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <iomanip>
//#include <queue>
//#include <set>
//#include <map>
//#include <math.h>
//#include <functional> 
//#include <stack>
//#include <cstring>
//#include <locale> 
//#include <cstdio>
//using namespace std;
//
//#define ll long long
//#define ull unsigned ll
//#define mp(a,b) (make_pair(a,b))
////#define X first
////#define Y second        
//#define INF (ll)1e18
//#define PR (ll)10000000-3
//#define OST 1000000007
//#define pii pair<int,int> 
//#define pll pair<ll,ll>
//#define pdd pair<double, double>
//#define EPS (double)1e-7
//#define PI (double)3.1415926535897
//#define vi vector<int>
//#define vii vector< vi >
//#define vl vector<ll>
//#define vc vector<char>
//
//int n, m, t, k;
//
//bool abc(string& s, string& s1, string& s2, char divider){
//	int pos = s.find(divider, 1);
//	if (pos == string::npos) return false;
//	
//	s1 = s.substr(0, pos);
//	s2 = s.substr(pos + 1);
//	return true;
//}
//
//ll parse(string s, int zam){
//	ll res = 0;
//	int len = s.length();
//
//	for (int i = 0; i < len; i++)
//		if (s[i] == '?') s[i] = zam + '0';
//
//	if (s[0] == '0' && len > 1) return INF;
//	if (s[0] == '-' && s[1] == '0') return INF;
//
//	bool flag = false;
//
//	int i = 0;
//	if (s[0] == '-') {
//		flag = true;
//		i++;
//	}
//	
//	for (; i < len; i++) {
//		res = res * 10 + (ll)(s[i] - '0');
//	}
//	if (flag) res = -res;
//	
//	if (res > 999999 || res < -999999) return INF;
//	return res;	
//}
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
//#endif
//	
//	string s;
//	cin >> s;
//	int ravn_pos = s.find('=');
//	string res = s.substr(ravn_pos + 1);
//	string temp = s.substr(0, ravn_pos);
//
//	string first = "", second = "";
//	bool mult = false, pl = false, minus = false;
//
//	mult = abc(temp, first, second, '*');
//	if (!mult) {
//		pl = abc(temp, first, second, '+');
//		if (!pl){
//			minus = abc(temp, first, second, '-');
//		}
//	}
//	
//
//	int ans = -1;
//	set<int> bad;
//	for(int i=0; i<s.length(); i++)
//		bad.insert(s[i] - '0');
// 	for (int i = 0; i < 10; i++){
//		if (bad.find(i) != bad.end()) continue;
//		ll a, b, c;
//		a = parse(first, i);
//		b = parse(second, i);
//		c = parse(res, i);
//		if (a == INF || b == INF || c == INF) continue;
//		
//		if (mult) {
//			if (a * b == c) {
//				ans = i;
//				break;
//			}
//		}
//		else if (pl) {
//			if (a + b == c) {
//				ans = i;
//				break;
//			}
//		}
//		else if (minus) {
//			if (a - b == c) {
//				ans = i;
//				break;
//			}
//		}
//	}
//	cout << ans;
//	return 0;	
//}
//
//
//
