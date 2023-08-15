#include<iostream>

#define MOD 1000000007

int main (void)
{
    long long n, a, b, c, exp;

    std::cin >> n ;

    for(int i = 0; i < n; i++)
    {
        exp = 1;
        std::cin >> a >> b >> c;
        while (c > 0)
        {
            if (c & 1)
                exp = exp * b % MOD;
            b = b * b % MOD;
            c = c >> 1;
        }
        b = exp;
        exp = 1;
        while (b > 0)
        {
            if (b & 1)
                exp = exp * a % MOD;
            a = a * a % MOD;
            b = b >> 1;
        }
        std::cout << exp % MOD << '\n';
    }
    return (0);
}