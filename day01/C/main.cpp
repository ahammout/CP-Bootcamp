#include <iostream>
#include <map>

int main(void)
{
    long long n, sum, cont;

    std::cin >> n;
    std::cin >> sum;

    long long  prefexsum = 0;

    std::map<long long, long> mp;
    cont = 0;
    for (int i = 0; i < n; i++)
    {
        long long y;
        std::cin >> y;
        prefexsum += y;
        if (prefexsum == sum)
            cont++;
        if(mp.find(prefexsum -sum) != mp.end())
            cont += mp[prefexsum -sum];
        mp[prefexsum]++;
    }
    std::cout << cont << '\n';
    return (0);
}