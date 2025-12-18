#include <iostream>
#include "ResourceManager.hpp"

using namespace std;

int ResourceManager::totalResources = 0;

void ResourceManager::addResource(const Resource& r)
{
    resources.push_back(r);
    totalResources++;
}

Resource* ResourceManager::searchResource(int id)
{
    for (auto& r : resources)
        {
            if (r.getId() == id)
            {
                return &r;
            }
        }

    return nullptr;
}

void ResourceManager::report() const
{
    cout << "Total Resources: " << totalResources << endl ;
    
    for (const auto& r : resources)
    {
       r.printSchedule();
    }
}
