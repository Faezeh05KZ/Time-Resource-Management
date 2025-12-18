#include <iostream>
#include "Resource.hpp"

using namespace std;


Resource :: Resource(int i , const string& n) : id(i) , name(n) {}

bool Resource :: hasConflict(const TimeInterval& interval) const
{
    for (const auto& it : intervals)
    {
        if (it.overlaps(interval))
        {
            return true;
        }
    }

    return false;
}

bool Resource :: addInterval(const TimeInterval& interval)
{
    if (hasConflict(interval))
    {
        return false ;
    }

    intervals.push_back(interval) ;
    return true ;
}

void Resource :: printSchedule() const
{
    cout << "Resource " << id <<  name << endl;
    
    for (const auto& it : intervals)
    {
        cout << "Interval" << endl ;

    }
}


int Resource :: getId() const
{
    return id ;
}