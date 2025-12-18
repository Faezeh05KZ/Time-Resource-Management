#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

#include <iostream>
#include <vector>
#include "Resource.hpp"

class ResourceManager
{
    private:
    
        std::vector<Resource> resources ;
        static int totalResources ;

    public:

        void addResource(const Resource& r) ;
        Resource* searchResource(int id) ;
        void report() const ;
};

#endif
