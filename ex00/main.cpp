









#include <iostream>

class   obj
{   
    public:
        int level;
        obj() : level(789) {}
        obj&    operator=(const obj& other)
        {
            this->level = other.level;
            return *this;
        }
        void printf()
        {
            std::cout << "the message is obj" << this << std::endl;
        }
};
std::ostream  & operator<<(std::ostream &out, const obj& b)
{
    std::cout << "obj address :" << &b << std::endl;
    return out ;
}

template <typename S> void  swap(S& x, S& y)
{
    S tmp(x);
    // tmp = x ;
    x = y ;
    y = tmp ;
    return ;
}

template <typename Y> Y min(Y x, Y y)
{
    if(x == y)
        return y;
    return (x < y ) ? x : y;
} 

template <typename M> M max(M x, M y)
{
    if(x == y)
        return y;
    return (x > y ) ? x : y;
}

int main()
{
    int  a = 100;
    int  b = 9999;
    std::cout << "a :"<< a << "B:" << b << std::endl; 
    swap(a, b);
    std::cout << "a :"<< a << "B:" << b << std::endl; 
}
