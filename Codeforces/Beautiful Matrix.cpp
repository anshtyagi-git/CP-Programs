#include <iostream>

using namespace std;

int main()
{
    int matrix[5][5], row, col, rstep = 0, cstep = 0;
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1)
            {
                row = i + 1;
                col = j + 1;
            }
        }   
    }
    if(row > 3)
    {
        rstep = row - 3;
    }
    else if(row < 3)
    {
        rstep = 3 - row;
    }
    else
    {
        rstep = 0;
    }

    if(col > 3)
    {
        cstep = col - 3;
    }
    else if(col < 3)
    {
        cstep = 3 - col;
    }
    else
    {
        cstep = 0;
    }

    cout << (rstep + cstep) << "\n";

    return 0;
}
