#include <iostream>
using namespace std;
int main()
{
    int a, b, years = 0;
    cin >> a;
    cin >> b;

    while(1)
    {
        years++;
        a *= 3;
        b *= 2;
        if(a > b)
        {
            break;
        }
    }
    cout << years << "\n";
    return 0;
}
