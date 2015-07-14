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
//const int mod = 1e+9 + 9;
//const int maxn = 1e+5 + 100;
//
//struct num{
//    ll x;
//    long double value;
//
//    num(){
//        x = value = 0;
//    }
//
//    num(ll x, long double value){
//        this->x = x % mod;
//        this->value = value;
//    }
//
//    num operator * (const num &o) const{
//        return num(x * (ll) o.x, value + o.value);
//    }
//
//    bool operator < (const num &o) const{
//        return value < o.value;
//    }
//
//    num pow(int p){
//        num ans(1, 1);
//        num mul(x, value);
//        while(p){
//            if (p & 1){
//                ans = ans * mul;
//            }
//            mul = mul * mul;
//            p >>= 1;
//        }
//        return ans;
//    }
//};
//
//num dp[30][maxn];
//vector<int> divs[maxn];
//num ppp[30][maxn];
//
//bool isPrime(int value){
//    for (int i = 2; i * i <= value; ++i){
//        if (value % i == 0) return false;
//    }
//    return true;
//}
//
//void solve(){
//    int n;
//    scanf("%d", &n);
//    vector<int> primes;
//    for(int i=3; i <= 300; ++i)
//        if (isPrime(i))
//            primes.pb(i);
//    const int maxp = 20;
//    for(int i=1; i<=n; ++i){
//        //if (n % i == 0)
//        {
//        divs[i].pb(i);
//        for(ll j = 2; j * j <= i; ++j)
//            if (i % j == 0){
//                divs[i].pb(j);
//                divs[i].pb(i / j);
//            }
//        }
//    }
//    forn(j, n)
//        dp[maxp - 1][j + 1] = num(primes[maxp - 1], log(primes[maxp - 1] * 1.)).pow(j);
//    for(int j = 0; j <= maxp; j++)
//        for(int i = 0; i <= n + 1; i++)
//            if (i == 0) ppp[j][i] = num(1, 0);
//            else ppp[j][i] = ppp[j][i-1] * num(primes[j], log(primes[j] * 1.));
//    for(int i = maxp - 2; i >= 0; --i){
//        for(int j = 1; j <= n; ++j){
//            //if (n % j != 0) continue;
//            dp[i][j] = dp[i+1][j];
//            for(int it = 0; it < sz(divs[j]); it++){
//                int pp = divs[j][it] - 1;
//                {
//                    num cond = dp[i + 1][j / (pp + 1)] * ppp[i][pp];
//                    if (cond < dp[i][j]){
//                        dp[i][j] = cond;
//                    }
//                }
//            }
//        }
//    }
//    printf("%d\n", dp[0][n].x);
//}
//
//int main(){
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//#else
//    /*freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);*/
//#endif
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//    return 0;
//}
