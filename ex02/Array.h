



#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
#include <stdexcept>

template <typename T>
class Array {

    private:
        T* ptrs;
        unsigned int _size;
    public:
        Array() : ptrs(new T[0]()), _size(0) {}
        
        Array(unsigned int n):  ptrs(new T[n]()), _size(n) {}
        
        Array(const Array& other) : ptrs(new T[other._size]) , _size(other._size) {
            for (std::size_t i = 0 ; i< _size; i++)
            ptrs[i] = other.ptrs[i];
        }


        Array& operator=(const Array& other)
        {
            if(this != &other)
            {
                delete[] ptrs;
                _size = other._size;
                ptrs = new T[_size];
                for(std::size_t i = 0 ; i < _size ; i++)
                    ptrs[i] = other.ptrs[i];
            }
            return *this;
        }
        ~Array()
        {
            delete[] ptrs;
        }

        

        T& operator[](unsigned int index) // bach tkheli user i dir modification inside array eg arr[0] = 42;
        {
            if(index >= _size)
                throw std::out_of_range("Index out of bounds");
            return ptrs[index];
        }
        const T& operator[](unsigned int index) const // bach the user i 9ra data mli tkon array as read only 
        {
            if(index >= _size)
                throw std::out_of_range("Index out of bounds");
            return ptrs[index];
        }
        // Size function (must be const!)
        unsigned int size() const
        {
            return _size ;
        }

};


#endif