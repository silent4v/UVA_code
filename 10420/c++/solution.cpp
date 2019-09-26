#include <iostream>
#include <map>
using namespace std;
int main()
{
    int num , i;
    string cache;
    char c;
    map<string,int>data;
    while(cin >> num)
    {
        while(i < num)
        {
            c = cin.peek();
            cin >> cache;
            if(c == '\n')
            {
                data[cache]++;
                i++;
            }
        }
        for(map<string,int>::iterator p = data.begin() ; p != data.end() ; p++)
            cout << p->first << " : " << p->second << endl;
    }
    return 0;
}