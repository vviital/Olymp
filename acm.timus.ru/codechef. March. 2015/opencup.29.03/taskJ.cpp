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
//string solve(int count, int f, int s, int value){
//	if (value <= 25){
//		string ss = "a";
//		return (ss + (char)(value + 'a'));
//	}
//	string ans(max(count - 4, 0), 'a');
//	forn(i, len(ans)){
//		if (!(i & 1)) ans[i] = f + 'a' - 1;
//		else ans[i] = s + 'a' - 1;
//	}
//	int curval = 0;
//	forn(i, len(ans) - 1){
//		curval += abs(ans[i+1] - ans[i]);
//	}
//	if (count == 3){
//		for(int i1 = 0; i1 < 26; i1++)
//		for(int i2 = 0; i2 < 26; i2++)
//			for(int in = 0; in < 26; in++){
//				int buf = curval;
//				buf += abs(i2 - i1);
//				if (count == 3){
//					buf += abs(in - i2);
//				} else {
//					char ch1 = i2 + 'a';
//					char ch2 = in + 'a';
//					buf += abs(ch1 - ans[0]);
//					buf += abs(ch2 - ans[len(ans) - 1]);
//				}
//				if (buf == value){
//					char ch2 = i2 + 'a';
//					char ch3 = in + 'a';
//					char ch1 = i1 + 'a';
//					ans = ch1 + (ch2 + (ans + ch3));
//					return ans;
//				}
//			}
//	}
//	for(int i1 = 0; i1 < 26; i1++)
//		for(int i2 = 0; i2 < 26; i2++)
//			for(int in1 = 0; in1 < 26; in1++)
//				for(int in = 0; in < 26; in++){
//					int buf = curval;
//					buf += abs(i2 - i1);
//					buf += abs(in - in1);
//					if (count == 4){
//						buf += abs(in1 - i2);
//					} else {
//						char ch1 = i2 + 'a';
//						char ch2 = in1 + 'a';
//						buf += abs(ch1 - ans[0]);
//						buf += abs(ch2 - ans[len(ans) - 1]);
//					}
//					if (buf == value){
//						char ch2 = i2 + 'a';
//						char ch3 = in1 + 'a';
//						char ch1 = i1 + 'a';
//						char ch4 = in + 'a';
//						ans = ch2 + ans + ch3;
//						ans = ch1 + ans + ch4;
//						return ans;
//					}
//			}
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	int n;
//	cin >> n;
//	int count = (n - 1) / 25 + 2;
//	string s1 = solve(count, 1, 26, n);
//	string s2 = s1;//solve(count, 26, 1, n);
//	s1 = min(s1, s2);
//	cout << s1 << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
