#ifndef TIMEINTERVAL_HPP
#define TIMEINTERVAL_HPP

#include "Time.hpp"

class TimeInterval
{
    private:

        Time start;
        Time end;

    public:

        TimeInterval(Time s , Time e) ;

        int duration() const  ;

        bool overlaps (const TimeInterval& other) const ;
        TimeInterval merge (const TimeInterval& other) const ;

        TimeInterval operator + (const TimeInterval& other) const ;
        bool operator < (const TimeInterval& other) const ;
        bool operator == (const TimeInterval& other) const ;

        const Time& getStart() const ;
        const Time& getEnd() const ;
};

#endif
