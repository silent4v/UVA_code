#include <iostream>
#include <cmath>
#define MIN  60
#define pi 3.1415926535
using namespace std;
double chord(int x , int y , string flag)
{
    double cache = (double)y;
    if(flag == "min")
        cache /= 60;
    cache = cache * pi / 180;
    double ans = 2 * x * x * (1 - cos(cache));
    ans = sqrt(ans);
    return ans;
}
double arc(int x , int y , string flag)
{
    double cache = (double)y;
    if(flag == "min")
        cache /= 60;
    cache = cache * pi / 180;
    double ans = x * cache;
    return ans;
}

int main()
{
    int distance , angle;
    string unit;
    while(cin >> distance >> angle >> unit)
    {
        distance += 6440;
        printf("%.6lf\n",arc(distance,angle,unit));
        printf("%.6lf\n",chord(distance,angle,unit));
    }
    return 0;
}