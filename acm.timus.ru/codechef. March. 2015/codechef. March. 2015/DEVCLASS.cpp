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
//void recalc(string &s, int i, int j){
//	for(int iter = j; iter >= i; iter--) s[iter] = s[iter-1];
//}
//
//ll solvetype2(string &s, char beg){
//	// beg == 0
//	vector<int> arr;
//	forn(i, sz(s)) if (s[i] == beg) arr.pb(0); else arr.pb(1);
//	// f - what we need
//	int ff = -1;
//	int index = -1;
//	ll ans = 0;
//	forn(i, sz(s)){
//		if (ff == -1){
//			if (i & 1){
//				if (arr[i] == 1) continue;
//				ff = 1;
//				index = i;
//				continue;
//			}
//			if (arr[i] == 0) continue;
//			ff = 0;
//			index = i;
//		} else {
//			if (ff == 0){
//				if (arr[i] == 1) continue;
//				ans += abs(i - index);
//				swap(arr[i], arr[index]);
//				if (abs(i - index) == 1) {
//					ff = -1;
//					index = -1;
//					continue;
//				}
//				index += 2;
//				continue;
//			} else {
//				if (arr[i] == 0) continue;
//				ans += abs(i - index);
//				swap(arr[i], arr[index]);
//				if (abs(i - index) == 1){
//					ff = -1;
//					index = -1;
//					continue;
//				}
//				index += 2;
//				continue;
//			}
//		}
//	}
//	if (index < sz(arr) && index != -1) return -1;
//	return ans;
//}
//
//ll solve(string s, int type, char beg){
//	int cnt1 = 0, cnt2 = 0;
//	forn(i, sz(s)){
//		if (s[i] == beg) cnt1++;
//		else cnt2++;
//	}
//	if (abs(cnt1 - cnt2) > 1) return -1;
//	if (type == 0){
//		int cc1 = 0;
//		int cc2 = 0;
//		forn(i, sz(s)) {
//			if (i & 1){
//				if (s[i] == beg) cc1++;
//			} else {
//				if (s[i] != beg) cc2++;
//			}
//		}
//		if (cc1 == cc2) return cc1;
//		return -1;
//	}
//	if (type == 1){
//		ll ans = 0;
//		queue<int> q1, q2;
//		// q1 contain beg
//		// q2 contain !beg
//		forn(i, sz(s)){
//			if (i & 1){
//				if (s[i] != beg) continue;
//				if (sz(q2)){
//					int index = q2.front();
//					q2.pop();
//					swap(s[index], s[i]);
//					ans += abs(index - i);
//					continue;
//				}
//				q1.push(i);
//			} else {
//				if (s[i] == beg) continue;
//				if (sz(q1)){
//					int index = q1.front();
//					q1.pop();
//					swap(s[index], s[i]);
//					ans += abs(index - i);
//					continue;
//				}
//				q2.push(i);
//			}
//		}
//		if (sz(q1) || sz(q2)) return -1;
//		return ans;
//	}
//	if (type == 2){
//		return solvetype2(s, beg);
//		ll ans = 0;
//		queue<int> q1, q2;
//		// q1 contain beg
//		// q2 contain !beg
//		forn(i, sz(s)){
//			if (s[i] == beg){
//				if (sz(q2)){
//					int index = q2.front();
//					q2.pop();
//					char cur = s[i];
//					recalc(s, index + 1, i);
//					s[index] = cur;
//					ans += abs(i - index);
//					i = index;
//					continue;
//				}
//				if ((i & 1)){
//					if (!sz(q1)) q1.push(i);
//				}
//			} else {
//				if (sz(q1)){
//					int index = q1.front();
//					q1.pop();
//					char cur = s[i];
//					recalc(s, index + 1, i);
//					s[index] = cur;
//					ans += abs(i - index);
//					i = index;
//					continue;
//				}
//				if ((i & 1) == 0){
//					if (!sz(q2)) q2.push(i);
//				}
//			}
//		}
//		if (sz(q1) || sz(q2)) return -1;
//		return ans;
//	}
//	return 0;
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
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int type;
//		string s;
//		scanf("%d", &type);
//		cin >> s;
//		ll answer1 = solve(s, type, 'B');
//		ll answer2 = solve(s, type, 'G');
//		if (answer1 == answer2 && answer1 == -1) cout << -1 << "\n";
//		else{
//			if (answer1 == -1) answer1 = 1e+18;
//			if (answer2 == -1) answer2 = 1e+18;
//			cout << min(answer1, answer2) << "\n";
//		}
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
