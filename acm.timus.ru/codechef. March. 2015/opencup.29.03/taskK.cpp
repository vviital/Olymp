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
//const int maxn = 300;
//
//int mas[maxn][maxn];
//int f[maxn][maxn];
//int n, m;
//
//int x[] = {1, 2, 2, 1, -1, -2, -2, -1};
//int y[] = {2, 1, -1, -2, -2, -1, 1, 2};
//
//void solve(){
//	pii st;
//	pii e;
//	forn(i, n){
//		string s;
//		cin >> s;
//		forn(j, sz(s)){
//			if (s[j] == 'K'){
//				st = mp(i, j);
//			}
//			if (s[j] == 'X'){
//				e = mp(i, j);
//			}
//			if (s[j] == '#'){
//				f[i][j] = 1;
//			}
//		}
//	}
//	queue<pii> q;
//	q.push(st);
//	mas[st.X][st.Y] = 0;
//	while(q.size()){
//		pii cur = q.front();
//		q.pop();
//		forn(i, 8){
//			int toi = cur.X + x[i];
//			int toj = cur.Y + y[i];
//			if (toi < 0 || toi >= n) continue;
//			if (toj < 0 || toj >= m) continue;
//			if (f[toi][toj] == 1) continue;
//			if (mas[toi][toj] == -1){
//				mas[toi][toj] = mas[cur.X][cur.Y] + 1;
//				q.push(mp(toi, toj));
//			}
//		}
//	}
//	cout << mas[e.X][e.Y] << "\n";
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
//	forn(i, maxn) forn(j, maxn) mas[i][j] = -1;
//	cin >> n >> m;
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
