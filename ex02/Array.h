



#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
#include <stdexcept>

template <typename T>
class Array {

    private:
        T* ptrs;
        unsigned int size;
    public:
        Array() : ptrs(NULL), size(0) {}
        
        Array(unsigned int n):  ptrs(new T[n]()), size(n) {}
        
        Array(const Array& other) : ptrs(new T[other.size]) , size(other.size) {
            for (std::size_t i = 0 ; i< size; i++)
            ptrs[i] = other.ptrs[i];
        }


        Array& operator=(const Array& other)
        {
            if(this != &other)
            {
                delete[] ptrs;
                size = other.size;
                ptrs = new T[size];
                for(std::size_t i = 0 ; i < size ; i++)
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
            if(index >= size)
                throw std::out_of_range("Index out of bounds");
            return ptrs[index];
        }
        const T& operator[](unsigned int index) const; // bach the user i 9ra data mli tkon array as read only 
        {
            if(index >= size)
                throw std::out_of_range("Index out of bounds");
            return ptrs[index];
        }
        // Size function (must be const!)
        unsigned int size() const
        {
            return this->size ;
        }

};


#endif