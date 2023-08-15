#include<iostream>

#define MOD 1000000007

int main (void)
{
    long long n, a, b, exp;

    std::cin >> n ;
    for(int i = 0; i < n; i++)
    {
        exp = 1;
        std::cin >> a >> b ;
        while (b > 0)
        {
            if (b & 1)
                exp = exp * a % MOD;
            a = a * a % MOD;
            b = b >> 1;
        }
        std::cout << exp << '\n';
    }
    return (0);
}