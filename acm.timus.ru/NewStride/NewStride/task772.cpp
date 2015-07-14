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
//void move(vector<int> &f, vector<int> &t, vector<pii> &log, int i, int j){
//	t.push_back(f.back());
//	f.pop_back();
//	log.pb(mp(i, j));
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
//	scanf("%d", &n);
//	if (n == 1) return 0;
//	vector<vector<int> > arr(n);
//	forn(i, n){
//		int cnt;
//		scanf("%d", &cnt);
//		forn(j, cnt){
//			int val;
//			scanf("%d", &val);
//			val--;
//			arr[i].pb(val);
//		}
//	}
//	vector<pii> ans;
//	bool ok = true;
//	for(int i=1; i < n; i++){
//		while(sz(arr[i])){
//			move(arr[i], arr[0], ans, i, 0);
//		}
//	}
//	while(sz(arr[0])){
//		int to = max(1, arr[0].back());
//		move(arr[0], arr[to], ans, 0, to);
//	}
//	while(sz(arr[1]) && !arr[1].back()){
//		move(arr[1], arr[0], ans, 1, 0);
//	}
//	if (n >= 3){
//		while(sz(arr[1])){
//			int to = arr[1].back();
//			if (to == 1) to++;
//			move(arr[1], arr[to], ans, 1, to);
//		}
//		while(sz(arr[2]) && arr[2].back() == 1){
//			move(arr[2], arr[1], ans, 2, 1);
//		}
//	}
//	forn(i, sz(arr[1])) 
//		if (arr[1][i] == 0)
//			ok = false;
//	if (!ok){
//		printf("0\n");
//		return 0;
//	}
//	forn(i, sz(ans)){
//		printf("%d %d\n", ans[i].X + 1, ans[i].Y + 1);
//	}
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
