#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cassert>

#define ll long long

using namespace std;

const double PI = 3.1415926535897932384626433832795;
const ll maxn=1e9;

double x,y,x1,Y1,x2,y2,l,r;

double sqr(double val){
	return val * val;
}

double dist(int x, int y, int xx, int yy)
{
    return(sqrt(sqr(x-xx)+sqr(y-yy)));
}

int main()
{
   // freopen("angle1.in","r",stdin);
   // freopen("angle1.out","w",stdout);
    cin >> x >> y >> x1 >> Y1 >> x2 >> y2;
    l=0;
    r=maxn;
    double vecx = (x2 - x1);
    double vecy = (y2 - Y1);
    double len = sqrt(vecx * vecx + vecy * vecy);
    vecx /= len;
    vecy /= len;
    for (int i=1; i<=100; ++i)
    {
        double mid1=l+(r-l)/3;
        double mid2=r-(r-l)/3;
        double mx1 = x + vecx * mid1;
        double my1 = y + vecy * mid1;


        double mx2 = x + vecx * mid2;
        double my2 = y + vecy * mid2;

        double d1 = dist(x, y, mx1, my1);
        double d2 = dist(x, y, mx2, my2);

		//cout << d1 << " " << d2 << "\n";

        if (d1>d2)
        {
            l=mid1;
        }
        else
        {
            r=mid2;
        }
    }
    double mx1 = x + vecx * l;
    double my1 = y + vecy * r;
    double d1 = dist(x, y, mx1, my1);
    cout << fixed << setprecision(15) << d1 << "\n";
    return 0;
}