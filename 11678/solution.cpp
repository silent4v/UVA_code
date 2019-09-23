#include <iostream>
#include <map>
using namespace std;
int s(int x , int y)
{
    if(x < y)
        return x;
    return y;
}

int main()
{
    map<int,int>A;
    map<int,int>B;
    int a , b , cache , n1 , n2;
    while(cin >> a >> b && a != 0 && b != 0)
    {
        A.clear();
        B.clear();
        n1 = 0;
        n2 = 0;
        for(int i = 0 ; i < a ; i++)
        {
            cin >> cache;
            A[cache] ++;
        }
        for(int i = 0 ; i < b ; i++)
        {
            cin >> cache;
            B[cache] ++;
        }
        for(map<int,int>::iterator p = A.begin() ; p != A.end() ; p++)
            if(p->second > 0  && B[p->first] == 0)
                n1 ++;
        for(map<int,int>::iterator p = B.begin() ; p != B.end() ; p++)
            if(p->second > 0 && A[p->first] == 0)
                n2 ++;
        cout << s(n1,n2)<< endl;
    }
    return 0;
}