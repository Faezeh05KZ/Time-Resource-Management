#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>

class Time 
{
    private:
        
        int hour , minute ;

    public:

        Time (int h = 0 ,  int  m = 0) ;

        bool operator < (const Time& other) const ;
        bool operator == (const Time& other ) const ;
        int operator - (const Time& other ) const ;

        int ToMin() const ;
        
};

#endif