



#pragma once 

#include <iostream>


template <typename I> 

I iter(I *arr,const std::size_t b, void (*f)(I&))
{
    for(int i = 0; i < b ; i++)
    {
        f(arr[i]);
    }
    return ;
}