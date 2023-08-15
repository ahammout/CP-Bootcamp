#include<iostream>

int main()
{
    long long n, seqSum, l, r, mid;

    std::cin >> n ;
    l = 0;
    r = n / 2;
    while (l <= r)
    {
        mid = (l + r) / 2;
        std::cout << "Left and right: " << l + r << '\n';
        if ((mid * (mid + 1) / 2) == n)
        {
            std::cout << mid << '\n';
            break;
        }
        else if (((mid * (mid + 1) / 2) > n))
            r = mid - 1;
        else
            l = mid + 1;
    }
}

// #include<iostream>

// int main()
// {
//     long long n, seqSum, x;

//     std::cin >> n ;
//     x = 1;
//     seqSum = 1;
//     while (n)
//     {
//         if (seqSum < n)
//         {
//             seqSum = x * (x + 1) / 2;
//             x++;
//         }
//         // else if (seqSum == n)
//         // {
//         //     std::cout << x << '\n';
//         //     break;
//         // }
//         else
//         {
//             std::cout << x - 1 << '\n';
//             break;
//         }
//     }
// }