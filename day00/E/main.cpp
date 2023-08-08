#include<iostream>
#include<set>

int main (void)
{
    std::set<int> s;
    std::set<int>::iterator it;
    std::string in;
    int n;

    while (1)
    {
        std::cin >> in;
        if (std::cin.eof())
            break;
        if (in.compare("insert") == 0)
        {
            std::cin >> n;
            if (std::cin.eof())
                break;
            s.insert(n);
        }
        else if (in.compare("delete") == 0)
        {
            std::cin >> n;
            if (std::cin.eof())
                break;
            s.erase(n);
        }
        else if (in.compare("exists") == 0)
        {
            std::cin >> n;
            if (std::cin.eof())
                break;
            it = s.find(n);
            if (it == s.end())
                std::cout << "false" << '\n';
            else
                std::cout << "true" << '\n';
        }   
    }
}