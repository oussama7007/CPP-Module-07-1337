









#include <iostream>
template <typename S> void  swap(S& x, S& y)
{
    S *tmp;
    *tmp = *x ;
    *x = *y ;
    *y = *tmp ;
    return ;
}

int main()
{
    int a = 24;
    int b = 22;
    swap(a, b);
    std::cout << "a :"<< a << "B:" << b << std::endl; 
}