#include<iostream>

int main(void)
{
    int n;

    std::cin >> n ;
    std::string grid[n];
    long long arr[n][n];
    for(int i = 0; i < n; i++)
        std::cin >> grid[i] ;
    
    
    ///* First line check 
    for (int i = 0; i < n; i++)
    {
        if (grid[0][i] == '*' || (arr[0][i - 1] && arr[0][i - 1] == 0))
            arr[0][i] = 0;
        else
            arr[0][i] = 1;
    }

    //* First colums check
    for (int j = 0; j < n; j++)
    {
        if (grid[j][0] == '*' || (arr[j - 1][0] && arr[j - 1][0] == 0))
            arr[j][0] = 0;
        else
            arr[j][0] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (grid[])
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << '\n' ;
    }
}