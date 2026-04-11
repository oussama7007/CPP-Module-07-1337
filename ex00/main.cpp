









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
    S tmp;
    tmp = x ;
    x = y ;
    y = tmp ;
    return ;
}

int main()
{
    obj a;
    obj b;
    swap(a, b);
    std::cout << "a :"<< a << "B:" << b << std::endl; 
}
