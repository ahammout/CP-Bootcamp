#include<iostream>
#include<vector>

int main(void)
{
    long long n;
    long long res;

    std::cin >> n ;
    long long arr[n + 1];
    res = 0;
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
        arr[i] = (arr[i - 1] + arr[i - 2]);
    std::cout << arr[n] << '\n';
}   