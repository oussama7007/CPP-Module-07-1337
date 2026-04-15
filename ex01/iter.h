



#ifndef ITER_H
#define ITER_H

#include <iostream>


template <typename I, typename F> 

void  iter(I *arr,std::size_t b, F f)
{
    for(std::size_t i = 0; i < b ; i++)
    {
        f(arr[i]);
    }
    
}

#endif