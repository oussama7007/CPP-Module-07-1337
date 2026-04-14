



#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>


template <typename T>
class Array {

    private:
        T* ptrs;
        unsigned int size;
    public:
        Array() : ptrs(NULL), size(0) {}
        
        Array(unsigned int n);  data(new T[n]()), size(n) {}
        
        Array(const Array& other) : data(new T[other.size]) , size(other.size) {
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
            if()
        }
        const T& operator[](unsigned int index) const; // bach the user i 9ra data mli tkon array as read only 

        // Size function (must be const!)
        unsigned int size() const;

};


#endif