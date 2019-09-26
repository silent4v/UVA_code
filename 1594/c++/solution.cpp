#include <iostream>
#include <vector>
#include <map>
using namespace std;

int abs(int x , int y)
{
    if(x > y)
        return x-y;
    return y-x;

int main()
{
    vector<int>zero;
    vector<int>cache;
    map<vector<int>,int>check;
    int reg;
    int num;
    while(cin >> num && num)
    {
        zero.clear();
        cache.clear();
        check.clear();
        for(int i = 0 ; i < num ; i++)
        {
            cin >> reg;
            cache.push_back(reg);
            zero.push_back(0);
        }
        while(check[cache] < 2  && cache != zero)
        {
            reg = cache[0];
            for(int i = 0 ; i < num-1 ; i++)
                cache[i] = abs(cache[i],cache[i+1]);
            cache[num-1] = abs(reg,cache[num-1]);
            check[cache]++;
        }
        if(cache == zero)
            cout << "ZERO" << endl;
        else 
            cout << "LOOP" << endl;
    }
    return 0;
}