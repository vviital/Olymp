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
//string name[] = {
//	"John",
//	"David",
//	"Peter",
//	"Robert",
//	"Mark",
//	"Paul",
//	"Patrick",
//	"Jack",
//	"Max",
//	"Alex"
//};
//
//string rom[] = {"I", "II", "III", "IV", "V", "VI"};
//
//pii parse(string s){
//	if (s[0] == '.'){
//		return mp(sz(s), 0);
//	}
//	if (s[0] - '0' >= 1 && s[0] - '0' <= 6){
//		return mp(s[0] - '0', 1);
//	}
//	forn(i, 6) if (s == rom[i]) return mp(i + 1, 2);
//}
//
//struct type{
//	char color;
//	int number;
//	int t;
//
//	void read(){
//		cin >> color;
//		string s;
//		cin >> s;
//		pii cur = parse(s);
//		number = cur.X;
//		t = cur.Y;
//	}
//};
//
//// . - 0
//// 1 - 1
//// I - 2
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	vector<type> arr(3);
//	forn(i, 3) arr[i].read();
//	vector<string> answer;
//
//	int cnt = 3;
//	forn(i, 3) if (arr[i].t == 0) cnt--;
//	if (!cnt) answer.pb(name[0]);
//
//	cnt = 0;
//	forn(i, 3) if (arr[i].t == 2) cnt++;
//	if (!cnt) answer.pb(name[1]);
//
//	cnt=3;
//	forn(i, 3) if(arr[i].color == 'W') cnt--;
//	if (!cnt) answer.pb(name[2]);
//
//	forn(i, 3) if (arr[i].color == 'B') cnt--;
//	if (!cnt) answer.pb(name[3]);
//
//	if (!cnt){
//		forn(i, 3){
//			int num = arr[i].number % 2;
//			if (num && arr[i].color != 'W') cnt = 1;
//			if (!num && arr[i].color != 'B') cnt = 1;
//		}
//		if (!cnt) answer.pb(name[4]);
//	}
//
//
//
//
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
