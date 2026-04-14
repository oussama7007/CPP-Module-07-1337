#include <iostream>
#include <string>
#include <cctype>
#include "iter.h"


// void divide_by2(int &i)
// {
//     i /= 2;
// }

// void camel(std::string &str)
// {
    
//     for (std::size_t i = 0; i < str.length(); i++)
//     {
//         if (std::islower(str[i]))
//             str[i] = std::toupper(str[i]);
//         else if (std::isupper(str[i]))
//             str[i] = std::tolower(str[i]);  
//     }
// }

// int main()
// {
//     std::cout << "================== Test string array ===================" << std::endl;
   
//     std::string str_arr[] = {"HelLow", "OusSamA", "What You FroM"};
    
//     iter(str_arr, 3, camel);
    
//     for (int i = 0; i < 3; i++)
//         std::cout << str_arr[i] << std::endl;

//      std::cout << "================== Test int  array ===================" << std::endl;
//     int int_arr[] = {10, 200, 300};

//     iter(int_arr, 3, divide_by2);
    
//     for (int i = 0; i < 3; i++)
//         std::cout << int_arr[i] << std::endl;

//     return 0;
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
