#include <iostream>
#include <string>
#include <cctype>
#include "iter.h"


void divide_by2(int &i)
{
    i /= 2;
}

void camel(std::string &str)
{
    
    for (std::size_t i = 0; i < str.length(); i++)
    {
        if (std::islower(str[i]))
            str[i] = std::toupper(str[i]);
        else if (std::isupper(str[i]))
            str[i] = std::tolower(str[i]);  
    }
}

int main()
{
    std::cout << "================== Test string array ===================" << std::endl;
   
    std::string str_arr[] = {"HelLow", "OusSamA", "What You FroM"};
    
    ::iter(str_arr, 3, camel);
    
    for (int i = 0; i < 3; i++)
        std::cout << str_arr[i] << std::endl;

     std::cout << "================== Test int  array ===================" << std::endl;
    int int_arr[] = {10, 200, 300};

    ::iter(int_arr, 3, divide_by2);
    
    for (int i = 0; i < 3; i++)
        std::cout << int_arr[i] << std::endl;

    return 0;
}