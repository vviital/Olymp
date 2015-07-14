//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//#include <cstdio>
//#include <iomanip>
//#define ll long long
//
//using namespace std;
//
//const double PI = 3.1415926535897932384626433832795;
//const ll maxn=1e4;
//
//double x,y,x1,Y1,x2,y2,l,r;
//
//double sqr(double a)
//{
//    return (a*a);
//}
//
//double dist(double x, double y, double xx, double yy)
//{
//    return(sqrt(sqr(x-xx)+sqr(y-yy)));
//}
//
//
//
//int main()
//{
//   // freopen("distance3.in","r",stdin);
//   // freopen("distance3.out","w",stdout);
//    cin >> x >> y >> x1 >> Y1 >> x2 >> y2;
//    l=0;
//    r=maxn;
//    double vecx = (x2 - x1);
//    double vecy = (y2 - Y1);
//    double len = sqrt(vecx * vecx + vecy * vecy);
//    vecx /= len;
//    vecy /= len;
//    for (int i=1; i<=100; ++i)
//    {
//        double mid1=l+(r-l)/3;
//        double mid2=r-(r-l)/3;
//        double mx1 = x1 + vecx * mid1;
//        double my1 = Y1 + vecy * mid1;
//
//
//        double mx2 = x1 + vecx * mid2;
//        double my2 = Y1 + vecy * mid2;
//
//        double d1 = dist(x, y, mx1, my1);
//        double d2 = dist(x, y, mx2, my2);
//
//        if (d1>d2)
//        {
//            l=mid1;
//        }
//        else
//        {
//            r=mid2;
//        }
//    }
//    double mx1 = x1 + vecx * l;
//    double my1 = Y1 + vecy * r;
//    double d1 = dist(x, y, mx1, my1);
//    cout << fixed << setprecision(15) << d1 << "\n";
//    return 0;
//}