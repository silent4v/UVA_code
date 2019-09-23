#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    string s_cache;
    vector<vector<vector<string>>>data;
    vector<vector<string>>vv_cache;
    vector<string>v_cache;
    char c;
    int i;
    while(cin >> num)
    {
        i = 0;
        while(i < num)
        {
            c = cin.peek();
            if(c == '\n')
            {
                i++;
                data.push_back(vv_cache);
                vv_cache.clear();
                continue;
            }
            cin >> s_cache;
            v_cache.push_back(s_cache);
            c = cin.peek();
            if(c == '\n')
            {
                vv_cache.push_back(v_cache);
                v_cache.clear();
            }
        }
        for(vector<vector<string>>::iterator p = vv_cache.begin() ; p != vv_cache.end() ; p++)
        {
            for(int i = 0 ; i < p->size() ; i++)
            {
                cout << p[i][i];
            }
            cout << endl;
        } 
    }
}