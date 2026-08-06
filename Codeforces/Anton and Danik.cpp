#include <iostream>
using namespace std;
int main()
{
    int n, anton = 0, danik = 0;
    string wins;
    cin >> n;
    cin >> wins;

    for(int i = 0; i < n; i++)
    {
        if(wins[i] == 'A')
        {
            anton++;
        }
        if(wins[i] == 'D')
        {
            danik++;
        }
    }

    if(anton > danik)
    {
        cout << "Anton" << "\n";
    }
    else if(anton < danik)
    {
        cout << "Danik" << "\n";
    }
    else
    {
        cout << "Friendship" << "\n";
    }
    
    return 0;
}
