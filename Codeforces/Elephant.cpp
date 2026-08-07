#include <iostream>
using namespace std; 

int main()
{
    int steps = 0, position;
    cin >> position;
    if(position >= 5)
    {
        steps += position / 5;
        position %= 5;
    }

    if(position >= 4)
    {
        steps += position / 4;
        position %= 4;
    }

    if(position >= 3)
    {
        steps += position / 3;
        position %= 3;
    }

    if(position >= 2)
    {
        steps += position / 2;
        position %= 2;
    }

    if(position >= 1)
    {
        steps += position;
        position %= 1;
    }

    cout << steps << "\n";
    
    return 0;
}
