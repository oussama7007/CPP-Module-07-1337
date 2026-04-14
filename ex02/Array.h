



#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>


template <typename T>
class Array {
    private:
        T* ptrs;
        unsigned int size;
    public:
        Array();
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        Array(unsigned int n);
        


};



#endif