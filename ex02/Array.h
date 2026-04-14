



#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

// TODO 1: Write the template header here (template <typename ...>)
template <typename T>
class Array {
    private:
        // TODO 2: Declare a pointer to type T (this will hold your array)
        // TODO 3: Declare an unsigned int to hold the size of the array
        T* ptr;
        unsigned int ezis;
    public:
        Array();
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();


};



#endif