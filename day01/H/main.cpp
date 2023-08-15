#include<iostream>

using namespace std;

int main(void)
{
    long long t, n, d, s;
    std::string input;

    std::cin >> t ;
    
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> d ;
        std::cin >> input;
        s = input.size();
        for (int j = 0; j < n; j++)
        {
            if ((input[j] - '0') < d)
            {
                input.insert(j, std::to_string(d));
                break;
            }
        }
        if (input.size() == s)
            input.insert(input.size(), std::to_string(d));
        std::cout << input << '\n';
    }
    return (0);
}