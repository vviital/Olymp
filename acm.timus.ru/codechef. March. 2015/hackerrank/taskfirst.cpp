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
//vector<int> arr;
//
//void solve(){
//	int n, k;
//	scanf("%d%d", &n, &k);
//	arr.resize(n);
//	forn(iter, n) scanf("%d", &arr[iter]);
//	priority_queue<int> q;
//	map<int, int> mm;
//	forn(iter, sz(arr)){
//		q.push(arr[iter]);
//		mm[arr[iter]] = iter;
//	}
//	while(k && sz(q)){
//		int t = q.top();
//		q.pop();
//		int index = n - t;
//		if (t == arr[index]) continue;
//		k--;
//		int f = mm[t];
//		int s = index;
//		mm[t] = s;
//		mm[arr[index]] = f;
//		swap(arr[f], arr[s]);
//	}
//	forn(iter, sz(arr)) printf("%d ", arr[iter]);
//	printf("\n");
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
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
