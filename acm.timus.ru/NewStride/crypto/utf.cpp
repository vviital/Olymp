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
//map<string, int> mm;
//
//void ToUpper(string &s){
//	forn(i, len(s)){
//		if (s[i] >= 'a') s[i] = s[i] - 'a' + 'A';
//	}
//}
//
//int getval(char ch){
//	if (ch >= '0' && ch <= '9')
//		return ch - '0';
//	return ch - 'A' + 10;
//}
//
//int parse(string &s, int cnt){
//	return getval(s[cnt]) * 16 + getval(s[cnt + 1]);
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
//	mm["D090"] = 192;
//	mm["D091"] = 193;
//	mm["D092"] = 194;
//	mm["D093"] = 195;
//	mm["D094"] = 196;
//	mm["D095"] = 197;
//	mm["D096"] = 198;
//	mm["D097"] = 199;
//	mm["D098"] = 200;
//	mm["D099"] = 201;
//	mm["D09A"] = 202;
//	mm["D09B"] = 203;
//	mm["D09C"] = 204;
//	mm["D09D"] = 205;
//	mm["D09E"] = 206;
//	mm["D09F"] = 207;
//	mm["D0A0"] = 208;
//	mm["D0A1"] = 209;
//	mm["D0A2"] = 210;
//	mm["D0A3"] = 211;
//	mm["D0A4"] = 212;
//	mm["D0A5"] = 213;
//	mm["D0A6"] = 214;
//	mm["D0A7"] = 215;
//	mm["D0A8"] = 216;
//	mm["D0A9"] = 217;
//	mm["D0AA"] = 218;
//	mm["D0AB"] = 219;
//	mm["D0AC"] = 220;
//	mm["D0AD"] = 221;
//	mm["D0AE"] = 222;
//	mm["D0AF"] = 223;
//	mm["D0B0"] = 224;
//	mm["D0B1"] = 225;
//	mm["D0B2"] = 226;
//	mm["D0B3"] = 227;
//	mm["D0B4"] = 228;
//	mm["D0B5"] = 229;
//	mm["D0B6"] = 230;
//	mm["D0B7"] = 231;
//	mm["D0B8"] = 232;
//	mm["D0B9"] = 233;
//	mm["D0BA"] = 234;
//	mm["D0BB"] = 235;
//	mm["D0BC"] = 236;
//	mm["D0BD"] = 237;
//	mm["D0BE"] = 238;
//	mm["D0BF"] = 239;
//	mm["D180"] = 240;
//	mm["D181"] = 241;
//	mm["D182"] = 242;
//	mm["D183"] = 243;
//	mm["D184"] = 244;
//	mm["D185"] = 245;
//	mm["D186"] = 246;
//	mm["D187"] = 247;
//	mm["D188"] = 248;
//	mm["D189"] = 249;
//	mm["D18A"] = 250;
//	mm["D18B"] = 251;
//	mm["D18C"] = 252;
//	mm["D18D"] = 253;
//	mm["D18E"] = 254;
//	mm["D18F"] = 255;
//	string s;
//	cin >> s;
//	ToUpper(s);
//	for(int i = 0; i < len(s);){
//		string buf;
//		forn(j, 2){
//			buf += s[i++];
//		}
//		int curans = 0;
//		if (buf == "D0" || buf == "D1"){
//			forn(j, 2)
//				buf += s[i++];
//			curans = mm[buf];
//		}
//		else{
//			curans = parse(buf, 0);
//		}
//		cout << hex << curans;
//	}
//#ifdef _DEBUG
//	cout << "\n" << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
