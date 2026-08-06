#include <iostream>
using namespace std;

int main()
{
    string username;
    cin >> username;

    int count = 0;
    int freq[26] ={0};
    for(int i = 0; i < username.length(); i++)
    {
        freq[username[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            count++;
        }
    }
    if(count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << "\n";
    }
    else
    {
        cout << "IGNORE HIM!" << "\n";
    }
    return 0;
}
