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
//const int mod = 1e+9 + 7;
//
//struct node{
//	int lets[10];
//	int ptr, len;
//	ll value;
//	int iii;
//
//	node(){
//		ms1(lets);
//		ptr = len = -1;
//		this->value = 0;
//	}
//
//	node(int ptr, int len){
//		ms1(lets);
//		this->ptr = ptr;
//		this->len = len;
//		this->value = 0;
//	}
//};
//
//vector<node> mas;
//string s;
//
//void solve(){
//	ll ans = 0;
//	mas.pb(node(0, -1));
//	mas.pb(node(0, 0));
//	int cur = 1;
//	forn(i, sz(s)){
//		int ch = s[i] - 'a';
//		while(true){
//			int ind = i - mas[cur].len - 1;
//			if (ind < 0 || s[ind] != s[i]) cur = mas[cur].ptr;
//			else break;
//		}
//		if (mas[cur].lets[ch] == -1){
//			int l = mas[cur].len;
//			mas[cur].lets[ch] = sz(mas);
//			if (cur == 0) cur = 0;
//			else{
//				cur = mas[cur].ptr;
//				while(true){
//					int ind = i - mas[cur].len - 1;
//					if (s[i] == s[ind]) break;
//					else cur = mas[cur].ptr;
//				}
//				cur = mas[cur].lets[ch];
//			}
//			mas.pb(node(cur, l + 2));
//			cur = sz(mas) - 1;
//		} else {
//			cur = mas[cur].lets[ch];
//		}
//		mas[cur].value++;
//		mas[cur].iii = i;
//	}
//	cout << sz(mas) - 2 << "\n";
//	for(int i = sz(mas) - 1; i >= 2; i--){
//		ans = (ans + mas[i].value * (ll)(mas[i].value - 1) / 2) % mod;
//		mas[mas[i].ptr].value += mas[i].value;
//	}
//	//cout << sz(mas) - 2 << "\n";
//	cout << ans << "\n";
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	cin >> s;
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
