#include<iostream>

#define MOD 1000000007

int main (void)
{
    long long a, b, res;

    std::cin >> b;
    a = 3;
    res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b = b >> 1;
    }
    std::cout << res << '\n';
}