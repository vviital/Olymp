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
//int gcd(int a, int b){
//	while(b){
//		a = a % b;
//		swap(a, b);
//	}
//	return a;
//}
//
//vector<int> getrev(vector<int> arr){
//	vector<int> ans(sz(arr));
//	forn(i, sz(arr)) {
//		ans[arr[i]] = i;
//	}
//	return ans;
//}
//
//vector<int> mul(vector<int> a, vector<int> b){
//	vector<int> ans(sz(a));
//	forn(iter, sz(ans)){
//		ans[iter] = a[b[iter]];
//	}
//	return ans;
//}
//
//bool cmp(vector<int> a, vector<int> b){
//	bool ok = true;
//	forn(iter, sz(a)) if (a[iter] != b[iter]) return false;
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
//	vector<int> perm(9);
//	vector<int> H(9);
//	forn(i, sz(H)){
//		cin >> H[i];
//		H[i]--;
//	}
//	forn(i, sz(perm)) perm[i] = i;
//	while(next_permutation(ALL(perm))){
//		vector<int> l = mul(perm, H);
//		vector<int> r = mul(H, perm);
//		if (!cmp(l, r)){
//			cout << "YES\n";
//			forn(i, sz(perm)) cout << perm[i] + 1 << " ";
//			cout << "\n";
//			vector<int> cur = mul(perm, mul(H, getrev(perm)));
//			forn(i, sz(perm)) cout << cur[i] + 1 << " ";
//			return 0;
//		}
//	}
//	//Задание 6
//	/*int n;
//	cin >> n;
//	for(int i=1; i<n; i++) if (gcd(i, n) == 1) {
//		cout << i << "\t";
//		int cnt = 0;
//		int cur = i;
//		set<int> s;
//		for(int j=0; j<n; j++){
//			s.insert(cur);
//			if (cur == 1) break;
//			cur = (cur * i) % n;
//		}
//		if (sz(s) == n - 1) cout << "true";
//		else cout << "false";
//		cout << " " << sz(s);
//		cout << "\n";
//	}*/
//	// Задание 2
//	/*int b1 = 25, b2 = 15, b3 = b1 ^ b2, b4 = 0;
//	vector<int> cond;
//	for(int i=0; i<5; i++) cond.pb(1 << i);
//	cond.pb(0);
//	set<int> used;
//	forn(iter, sz(cond)){
//		used.insert(b1 ^ cond[iter]);
//		used.insert(b2 ^ cond[iter]);
//		used.insert(b3 ^ cond[iter]);
//		used.insert(b4 ^ cond[iter]);
//	}
//	used.insert(3 ^ b1);
//	used.insert(3 ^ b2);
//	used.insert(3 ^ b3);
//	used.insert(3 ^ b4);
//	int cur = -1;
//	forn(iter, 1 << 5) if (used.find(iter) == used.end()) {
//		cur = iter;
//		break;
//	}
//	cout << cur << "\n";
//	return 0;*/
//	// Задание 1
//	/*int mask = 1 << 5;
//	int b1 = 25, b2 = 15;
//	forn(alpha, 2) forn(beta, 2) {
//		int rez = (alpha * b1) ^ (beta * b2);
//		for(int i = 4; i>=0; i--) if (rez & (1 << i)) cout << 1; else cout << 0;
//		cout << endl;
//	}*/
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
