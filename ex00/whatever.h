



#pragma once 


#include <iostream>



template <typename S> 
void  swap(S& x, S& y)
{
    S tmp(x);
    // tmp = x ;
    x = y ;
    y = tmp ;
    return ;
}

template <typename Y> 

Y min(const Y& x,const Y& y)
{
    return (x < y ) ? x : y;
} 

template <typename M> 

M max(const M& x,const  M& y)
{
    return (x > y ) ? x : y;
}