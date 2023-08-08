#include<iostream>
#include<stack>

// int main(void)
// {
//     int n;
//     int stat;
//     std::string in;
//     std::stack<char> stack;

//     std::    ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);

//     std::cin >> n ;
//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> in ;
//         if (in.empty())
//             std::cout << "No" << '\n';
//         else
//         {
//             // for (int j = 0; j < in.length(); j++)
//             //     stack.push(in[j]);

//             for (int f = 0; f < in.length(); f++)
//             {
//                 if (in[f] == ')' || in[f] == ']')
//                     stack.push(in[f]);
//                 if (in[f] == '(' || in[f] == '[')
//                 {
//                     if (!stack.empty() && in[f] == '(' && stack.pop() == ')')
//                     {
//                         stat = 0;
//                         stack.pop();
//                     }
                    
//                 }
//             }
//             if (stat == 0)
//                 std::cout << "Yes" << '\n';
//             else
//                 std::cout << "No" << '\n';
//         }
//     }
// }