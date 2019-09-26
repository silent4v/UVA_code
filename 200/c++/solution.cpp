#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int index = 1;
    string cache , answer = "";
    vector<string> data;
    map<char,int> sequence;
    map<char,int>::iterator p;
    data.clear();
    sequence.clear();
    while(cin >> cache)
    {
        if(cache == "#")
            break;
        for(int i = 0 ; i < cache.size() ; i++)
        {
            if(sequence[cache[i]] == 0)
            {
                sequence[cache[i]] = index;
                index++;
                break;
            }
        }
    }
    for(int i = 1 ; i < index ; i++)
    {
        for(p = sequence.begin() ; p != sequence.end() ; p++)
        {
            if(p->second == i)
            {
                answer += p->first;
                break;
            }
        }
    }
    cout << answer << endl;
    return 0;
}