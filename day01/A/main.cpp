#include<iostream>

int main(void)
{
    int n, q, a, b, sum;

    std::cin >> n ;
    std::cin >> q ;

    long long arr[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i] ;
        if ((i - 1) >= 0)
            arr[i] += arr[i - 1];
    }
    for(int i = 0; i < q; i++){
        std::cin >> a ;
        std::cin >> b ;
        sum = arr[b - 1] - arr[a - 2];
        std::cout << sum << '\n';
    }
    return (0);
}
