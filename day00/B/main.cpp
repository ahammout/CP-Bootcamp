#include<iostream>

int main()
{
    int n;
    int tmp;

    std::cin >> n ;
    int cubs[n];

    for(int i = 0; i < n; i++)
        std::cin >> cubs[i] ;

    for (int j = 0; j < (n - 1); j++)
    {
        for(int i = 0; i < (n - j - 1); i++)
        {
            if (cubs[i] > cubs[i + 1])
            {
                tmp = cubs[i];
                cubs[i] = cubs[i + 1];
                cubs[i + 1] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++)
        std::cout << cubs[i] << ' ';
}