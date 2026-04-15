









#include <iostream>



#include "whatever.h"

int main()
{
    
    int j = 20;
    int l = 300;
    swap( j, l );
    std::cout << "j = " << j << ", l = " << l << std::endl;
    const int a = 12;
    const int b = 15;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;

}
