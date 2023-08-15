#include<iostream>

int main(void)
{
    long long n, m, mid, l, h;
    int exist = 0;

    std::cin >> n ;
    long long col[n];
    for (int i = 0; i < n; i++)
        std::cin >> col[i];
    std::cin >> m ;
    long long sp[m];
    for (int i = 0; i < m; i++)
        std::cin >> sp[i] ;

    for (int i = 0; i < m; i++)
    {
        l = 0;
        h = n - 1;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (sp[i] == col[mid])
            {
                std::cout << "YES" << '\n';
                break;
            }
            if (sp[i] < col[mid])
                h = mid -1;
            else
                l = mid + 1;
        }
        if (l > h)
            std::cout << "NO" << '\n';
    }
} 