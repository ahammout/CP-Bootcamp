#include<iostream>

int main(void)
{
    int n;

    std::cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i] ;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            std::cout << arr[i] << ' ';
        else
        {
            std::cout << arr[i] + 2;
            if ((i + 1) != n)
                std::cout << ' ';
        }
    }
    return (0);
}