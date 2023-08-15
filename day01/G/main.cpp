#include<iostream>

int main(void)
{
    long long n;
    long inc;

    std::cin >> n ;
    long long arr[n];
    inc = 0;
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            inc += arr[i - 1] - arr[i];
            arr[i] += arr[i - 1] - arr[i];
        }
    }
    std::cout << inc << '\n'; 
}