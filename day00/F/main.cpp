#include<iostream>
#include<map>
/*
    ? MAP USAGE:
    * declare a map with two pairs
    ! By defualt the map takes two pairs so there is no need to use pair while declaring
    ? Insertion: 
    * to insert an element needs to use the method insert that take two pairs with template pair.

*/

int main(void)
{

    // * DECLARING A MAP AND WITH A STRING KEY AND AN INT VAL
    std::map<std::string, int> map;

    // * AN INTEGER THAT HOLDS THE NUMBER OF INPUT LINES;
    int n;
    std::string in;

    std::cin >> n ;
    for (int i = 0; i < n; i++)
    {
        std::cin >> in ;
        map.insert(pair<std::string, int>(in, 1));
    }
}