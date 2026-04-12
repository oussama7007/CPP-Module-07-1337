



#pragma once 


#include <iostream>



template <typename S> void  swap(S& x, S& y)
{
    S tmp(x);
    // tmp = x ;
    x = y ;
    y = tmp ;
    return ;
}

template <typename Y> 

Y min(Y x, Y y)
{
    return (x < y ) ? x : y;
} 

template <typename M> 

M max(M x, M y)
{
    return (x > y ) ? x : y;
}