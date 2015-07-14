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
//int getval(char ch){
//        if (ch >= '0' && ch <= '9')
//                return ch - '0';
//        return ch - 'a' + 10;
//}
// 
//int parse(string &s, int cnt){
//        return getval(s[cnt]) * 16 + getval(s[cnt + 1]);
//}
// 
//int getnext(char ch, int val){
//        int value = ch - 'a';
//        value += val;
//        return (value % 26) + 'a';
//}
// 
//int main()
//{
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//        string s;
//        cin >> s;
//        vector<int> arr(len(s) / 2);
//        for (int i = 0; i < len(s); i += 2){
//                arr[i / 2] = parse(s, i);
//        }
//#pragma region Dictionary
// 
//        map<unsigned char, unsigned char> letter;
//        letter['À'] = 'þ';
//        letter['Á'] = 'à';
//        letter['Â'] = 'á';
//        letter['Ã'] = 'ö';
//        letter['Ä'] = 'ä';
//        letter['Å'] = 'å';
//        letter['Æ'] = 'ô';
//        letter['Ç'] = 'ã';
//        letter['È'] = 'õ';
//        letter['É'] = 'è';
//        letter['Ê'] = 'é';
//        letter['Ë'] = 'ê';
//        letter['Ì'] = 'ë';
//        letter['Í'] = 'ì';
//        letter['Î'] = 'í';
//        letter['Ï'] = 'î';
//        letter['Ð'] = 'ï';
//        letter['Ñ'] = 'ÿ';
//        letter['Ò'] = 'ð';
//        letter['Ó'] = 'ñ';
//        letter['Ô'] = 'ò';
//        letter['Õ'] = 'ó';
//        letter['Ö'] = 'æ';
//        letter['×'] = 'â';
//        letter['Ø'] = 'ü';
//        letter['Ù'] = 'û';
//        letter['Ú'] = 'ç';
//        letter['Û'] = 'ø';
//        letter['Ü'] = 'ý';
//        letter['Ý'] = 'ù';
//        letter['Þ'] = '÷';
//        letter['ß'] = 'ú';
//        letter['à'] = 'Þ';
//        letter['á'] = 'À';
//        letter['â'] = 'Á';
//        letter['ã'] = 'Ö';
//        letter['ä'] = 'Ä';
//        letter['å'] = 'Å';
//        letter['æ'] = 'Ô';
//        letter['ç'] = 'Ã';
//        letter['è'] = 'Õ';
//        letter['é'] = 'È';
//        letter['ê'] = 'É';
//        letter['ë'] = 'Ê';
//        letter['ì'] = 'Ë';
//        letter['í'] = 'Ì';
//        letter['î'] = 'Í';
//        letter['ï'] = 'Î';
//        letter['ð'] = 'Ï';
//        letter['ñ'] = 'ß';
//        letter['ò'] = 'Ð';
//        letter['ó'] = 'Ñ';
//        letter['ô'] = 'Ò';
//        letter['õ'] = 'Ó';
//        letter['ö'] = 'Æ';
//        letter['÷'] = 'Â';
//        letter['ø'] = 'Ü';
//        letter['ù'] = 'Û';
//        letter['ú'] = 'Ç';
//        letter['û'] = 'Ø';
//        letter['ü'] = 'Ý';
//        letter['ý'] = 'Ù';
//        letter['þ'] = '×';
//        letter['ÿ'] = 'Ú';
//        letter['A'] = 'A';
//        letter['B'] = 'B';
//        letter['C'] = 'C';
//        letter['D'] = 'D';
//        letter['E'] = 'E';
//        letter['F'] = 'F';
//        letter['G'] = 'G';
//        letter['H'] = 'H';
//        letter['I'] = 'I';
//        letter['J'] = 'J';
//        letter['K'] = 'K';
//        letter['L'] = 'L';
//        letter['M'] = 'M';
//        letter['N'] = 'N';
//        letter['O'] = 'O';
//        letter['P'] = 'P';
//        letter['Q'] = 'Q';
//        letter['R'] = 'R';
//        letter['S'] = 'S';
//        letter['T'] = 'T';
//        letter['U'] = 'U';
//        letter['V'] = 'V';
//        letter['W'] = 'W';
//        letter['X'] = 'X';
//        letter['Y'] = 'Y';
//        letter['Z'] = 'Z';
//        letter['a'] = 'a';
//        letter['b'] = 'b';
//        letter['c'] = 'c';
//        letter['d'] = 'd';
//        letter['e'] = 'e';
//        letter['f'] = 'f';
//        letter['g'] = 'g';
//        letter['h'] = 'h';
//        letter['i'] = 'i';
//        letter['j'] = 'j';
//        letter['k'] = 'k';
//        letter['l'] = 'l';
//        letter['m'] = 'm';
//        letter['n'] = 'n';
//        letter['o'] = 'o';
//        letter['p'] = 'p';
//        letter['q'] = 'q';
//        letter['r'] = 'r';
//        letter['s'] = 's';
//        letter['t'] = 't';
//        letter['u'] = 'u';
//        letter['v'] = 'v';
//        letter['w'] = 'w';
//        letter['x'] = 'x';
//        letter['y'] = 'y';
//        letter['z'] = 'z';
//       
//#pragma endregion
//       
//		for(int i = 0; i < sz(arr); i++){
//			unsigned char ch = arr[i];
//			unsigned char ch1 = arr[i];
//			if (ch >= 128) 
//				ch1 = letter[ch];
//			cout << hex << (int)ch1;
//		}
//        return 0;
//}