#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <ctime>
#define ll long long

using namespace std;
const int maxn =  1e+3;
int dp[30][maxn],a[maxn],n,m,x,y,ans;
int pows[maxn];

void build(int n){
    for(int i = 1; i <= 25; i++){
        for(int j = 1; j <= n; j++){
            int index = j + (1 << (i - 1));
            int val = 1e+9;
            if (index < maxn) val = dp[i-1][j + (1 << (i - 1))];
            dp[i][j] = min(dp[i-1][j], val);
        }
    }
    pows[1] = 0;
    for(int i=1; i<maxn; i++){
        pows[i] = pows[i-1];
        if ((1 << (pows[i] + 1)) <= i) pows[i]++;
    }
}

int get_ans(int l, int r){
	if (r < l) swap(l, r);
    int val;
    int len = r - l + 1;
    int pp = pows[len];
    val = min(dp[pp][l], dp[pp][r - (1 << pp) + 1]);
    return val;
}

int main()
{
	freopen("input.txt", "r", stdin);
 /*   srand(time(0));
    for(int i=0; i<maxn; i++) dp[0][i] = 1e+9;
    for (int i=1; i<=6; i++) dp[0][i] = rand() % 10;
    for(int i=1; i<=6; i++) cout << dp[0][i] << " ";
    cout << "\n";
    build(6);
    for(int i=1; i<=6; i++) for (int j=i; j<=6; j++) cout << i << " " << j << " " << get_ans(i, j) << "\n";

    return 0; */
    cin >> n >> m >> dp[0][1];
    cin >> x >> y;
    for (int i=2; i<=n; ++i)
    {
        dp[0][i]=(23*dp[0][i-1]+21563)%16714589;
    }
    build(n);
    for (int i=1; i<=m; ++i)
    {
        
        ans=get_ans(x,y);
        if (i==m) cout << x << " " << y << " " << ans << endl;
        x=((17*x+751+ans+2*i)%n)+1;
        y=((13*y+593+ans+5*i)%n)+1;
    }
    return 0;
}