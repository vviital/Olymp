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
//const int mod2 = 1e+9 + 9;
//
//struct num{
//    int h1, h2;
//
//    num(){
//        this->h1 = this->h2 = 0;
//    }
//
//    num(ll h1, ll h2){
//        this->h1 = h1 % mod1;
//        if (h1 < 0) this->h1 = h1 + mod1;
//        //this->h2 = h2 % mod2;
//        //if (h2 < 0) this->h2 = (h2 + mod2) % mod2;
//    }
//
//    num operator + (const num &o) const{
//        return num(h1 + (ll)o.h1, h2 + (ll)o.h2);
//    }
//
//    num operator - (const num &o) const{
//        return num(h1 - (ll)o.h1,  h2 - (ll)o.h2);
//    }
//
//    num operator * (const num &o) const{
//        return num(h1 * (ll) o.h1, h2 * (ll) o.h2);
//    }
//
//    bool operator == (const num &o) const{
//		return h1 == o.h1;
//        if (h1 != o.h1 || h2 != o.h2) return false;
//        return true;
//    }
//};
//
//const int maxn = 1e+6 + 20000;
//num hash1[maxn];
//num pows[maxn];
//bool was[maxn];
//int add[maxn];
//
//num gethash(int l, int r){
//    if (l == 0) return hash1[r];
//    num a1 = hash1[l - 1] * pows[r - l + 1];
//    num b1 = hash1[r] - a1;
//    return hash1[r] - hash1[l - 1] * pows[r - l + 1];
//}
//
//void precalc(string s){
//    int p = 37;
//    pows[0] = num(1, 1);
//    pows[1] = num(p, p);
//    for(int i=2; i < maxn; i++)
//        pows[i] = pows[i - 1] * pows[1];
//    for(int i=0; i < len(s); i++){
//        if (i == 0){
//            hash1[i] = num(s[i] - '0', s[i] - '0');
//        } else {
//            hash1[i] = hash1[i - 1] * pows[1] + num(s[i] - '0', s[i] - '0');
//        }
//    }
//}
//
//int main(){
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//#else
//    //freopen("input.txt", "r", stdin);
//    /*freopen("output.txt", "w", stdout);*/
//#endif
//    int n, k;
//    cin >> n >> k;
//    string s;
//    cin >> s;
//    vector<int> ans(n);
//    precalc(s);
//    int to = sz(ans) / (k);
//    for(int size = 1; size <= to; ++size){
//        num etal = gethash(0, size - 1);
//        bool ok = true;
//        int to1 = size * k - 1;
//        for(int j = size; j <= to1; j += size){
//            num cur = gethash(j, j + size - 1);
//            //cout << cur.h1 << " " << etal.h1 << "\n";
//            if (cur == etal) continue;
//            ok = false;
//            break;
//        }
//        if (!ok) continue;
//        int l = -1, r = min(size, sz(ans) - size * k);
//       // cout << l << " " << r << "\n";
//        while(r - l > 1){
//            int middle = (r + l) >> 1;
//            num h1 = gethash(0, middle);
//            num h2 = gethash(size * k, size * k + middle);
//            if (h1 == h2) l = middle;
//            else r = middle;
//        }
//        add[size * k - 1]++;
//        add[size * k + r]--;
//    }
//    int cur = 0;
//    for(int i = 0; i < sz(ans); i++){
//        cur += add[i];
//        ans[i] = (bool)cur;
//    }
//    forn(i, sz(ans)) printf("%d", ans[i]);
//    printf("\n");
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//    return 0;
//}
