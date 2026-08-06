#include <iostream>

using namespace std;

int main()
{
    int year, temp, digit;
    bool distinct = true;
    cin >> year;
    for(int i = year + 1;; i++)
    {
        temp = i;
        bool seen[10] = {false};
        while(temp > 0)
        {
            digit = temp % 10;
            if(seen[digit] == true)
            {
                distinct = false;
                break;
            }
            seen[digit] = true;
            temp /= 10;
            distinct = true;
        }

        if(distinct)
        {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}
