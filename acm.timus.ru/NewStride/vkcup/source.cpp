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
//const int mod1 = 1e+9 + 7;
//
//struct num{
//	int val;
//
//	num(){
//		this->val = 0;
//	}
//
//	num(ll val){
//		this->val = val % mod1;
//	}
//
//	num operator + (const num &o) const{
//		return num(val + (ll)o.val);
//	}
//};
//
//bool check(string &a, string &b, int index){
//	int p1 = index;
//	bool ok = true;
//	int count = 0;
//	for(int i = index + 1; i < len(b); ++i){
//		if (a[p1] != b[i] && count) return false;
//		if (a[p1] == b[i]){
//			p1++;
//			continue;
//		}
//		count = 1;
//		i--;
//		p1++;
//		continue;
//	}
//	return ok;
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
//	int n;
//	cin >> n;
//	string a, b;
//	cin >> a >> b;
//	int ans = 0;
//	for(int i = 0; i < len(a); ++i){
//		if (a[i] != b[i]){
//			ans += check(a, b, i);
//			ans += check(b, a, i);
//			break;
//		}
//	}
//	cout << ans << "\n";
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
