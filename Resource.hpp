#ifndef RESOURCE_HPP
#define RESOURCE_HPP

#include <string>
#include <vector>
#include <iostream>

#include "TimeInterval.hpp"

class Resource
{
    private:

        int id;
        std::string name;
        std::vector<TimeInterval> intervals;

        public:

            Resource(int i , const std::string& n) ;

            bool addInterval(const TimeInterval& interval) ;
            bool hasConflict(const TimeInterval& interval) const ;
            void printSchedule() const ;
            
            int getId() const;


};

#endif