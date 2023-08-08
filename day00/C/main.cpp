#include<iostream>
#include<stack>
#include <cstdio>

int main(void)
{
    int N;
    int in;
    std::stack<int> stack;

    std::    ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> N ;
    for(int i = 0; i < N; i++)
    {
        std::cin >> in ;
        if (in == 1)
        {
            std::cin >> in ;
            stack.push(in);
        }
        else if (in == 2 && !stack.empty())
                stack.pop();
        else if (in == 3)
        {
            if (!stack.empty())
                printf("%d\n", stack.top());
            else
                printf("Empty!\n");
        }
    }
}
