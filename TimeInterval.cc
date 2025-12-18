#include <iostream>
#include "TimeInterval.hpp"


TimeInterval::TimeInterval(Time s , Time e) : start(s) , end(e) {}


bool TimeInterval :: overlaps(const TimeInterval& other) const
{
    return !(end < other.start || other.end < start) ;
}

int TimeInterval :: duration() const
{
    return end - start ;
}

TimeInterval TimeInterval :: merge(const TimeInterval& other) const
{
    Time newStart = (start < other.start) ? start : other.start ;
    Time newEnd = (end < other.end) ? other.end : end ; 

    return TimeInterval(newStart , newEnd) ;
}

bool TimeInterval :: operator< (const TimeInterval& other) const
{
    return start < other.start;
}

bool TimeInterval :: operator==(const TimeInterval& other) const
{
    return start == other.start && end == other.end;
}

TimeInterval TimeInterval :: operator+(const TimeInterval& other) const
{
    return merge(other);
}

const Time& TimeInterval :: getStart() const
{
    return start;
}

const Time& TimeInterval :: getEnd() const
{
    return end;
}
