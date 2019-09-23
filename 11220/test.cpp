#include <iostream>
using namespace std;
int main()
{
    int num , Case , i;
    char c;
    string input;
    while(cin >> num)
    {
        c = 32;
        Case = 1;
        cin.ignore(1);
        c = getchar();
        while(Case <= num)
        {
            cout << "Case #" << Case << " :"<< endl;
            do
            {
                i = 0;
                while(c != '\n')
                {
                    cin >> input;
                    if(input.length() < i+1)
                        continue;
                    cout << input[i];
                    i++;
                    c = cin.peek();
                }
                cout << endl;
                cin.ignore(1);
                c = cin.peek();
            } while (c != '\n');
            cout << endl;
            Case ++;
        }
    }
}