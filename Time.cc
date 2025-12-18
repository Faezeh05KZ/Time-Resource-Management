#include "Time.hpp"
#include <iostream>

using namespace std;

Time :: Time (int h ,  int m) : hour(h) , minute(m) {} 

int Time :: ToMin() const 
{
    return hour * 60 + minute ;
}

bool Time :: operator < (const Time& other) const
{
    return ToMin() < other.ToMin() ;
}

bool Time :: operator== (const Time& other) const
{
    return ToMin() == other.ToMin() ;
}

int Time :: operator - (const Time& other) const
{
    return ToMin() - other.ToMin() ;
}