



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

        Array(unsigned int n);  //Construction with an unsigned int n as a parameter: Creates an array of n elements
                                //initialized by default.
        

        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        // Size function (must be const!)
        unsigned int size() const;

};



#endif