#include<iostream>
#include<vector>

int main (void)
{
    long long n;
    long long seqSum;
    long long rest;

    std::cin >> n ;
    // * Formule: n * (n + 1) / 2
    seqSum = n * (n + 1) / 2;
    std::vector<long long> set1;
    std::vector<long long> set2;

    // * Check if n is even or odd;
    if ((seqSum % 2) != 0)
        std::cout << "NO" << '\n';
    else
    {
        std::cout << "YES" << '\n';
        rest = seqSum / 2;;
        for (long long i = n; i > 0; i--)
        {
            if (i == n)
            {
                set1.push_back(i);
                rest -= i;
                continue;
            }
            if ((rest - i) >= 0)
            {
                set1.push_back(i);
                rest -= i;
                continue;
            }
            else
            {
                set2.push_back(i);
                continue;
            }
        }
    std::cout << set1.size() << '\n';
    for (long long i = 0; i < set1.size(); i++)
        std::cout << set1[i] << ' ';
    std::cout << '\n';
    std::cout << set2.size() << '\n';
    for (long long i = 0; i < set2.size(); i++)
        std::cout << set2[i] << ' ';
    std::cout << '\n';
    }
}