#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int num , sub_end , sub_first;
    string cache;
    vector<vector<string>>reg1;
    vector<string>reg2;
    vector<vector<vector<string>>>data;
    while (cin >> num)
    {
        reg1.clear();
        data.clear();
        cin.ignore(1,'\n');
        getline(cin,cache);
        int i = 0;
        while(i < num)
        {
            reg2.clear();
            getline(cin,cache);
            cout << "i = " << i << endl;
            cout << "cache = " << cache << endl;
            if(cache == "")
            {
                i++;
                data.push_back(reg1);
                reg1.clear();
                continue;
            }
            sub_first = 0;
            while(sub_first < cache.size())
            {
                sub_end = cache.find_first_of(" ",sub_first);
                sub_first = sub_end + 1;
                cout << cache.substr(2,4) << endl;
                reg2.push_back(cache.substr(sub_first,sub_end));
            }
            reg1.push_back(reg2);
        }
        
        for(i = 0 ; i < data.size() ; i++)
        {
            for(int j = 0 ; j < data[i].size() ; j++)
            {
                for(int k = 0 ; k < data[i][j].size() ; k++)
                    cout << data[i][j][k] << " ";
                cout << endl;
            }
        }
        
    }
    return 0;
}