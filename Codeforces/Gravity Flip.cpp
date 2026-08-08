#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int col[n];
    for (int i = 0; i < n; i++)
    {
        cin >> col[i];
    }

    sort(col, col + n);

    for (int i = 0; i < n; i++)
    {
        cout << col[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
