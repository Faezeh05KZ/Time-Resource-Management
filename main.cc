#include <iostream>
#include "ResourceManager.hpp"

using namespace std;

int main()
{
    ResourceManager manager;

    int Count;
    cin >> Count;

    for (int i = 0 ; i < Count ; i++)
    {
        int id ;
        string name ;
        cin >> id >> name ;
 
        Resource r(id , name) ;

        int intervalCount ;
        cin >> intervalCount ;

        for (int j = 0 ; j < intervalCount ; j++)
        {
            int a1 , a2 , a3 , a4 ;
            cin >> a1 >> a2 >> a3 >> a4 ;

            Time start(a1 , a2) ;
            Time end(a3 , a4) ;

            TimeInterval interval(start , end) ;

            if (!r.addInterval(interval))
            {
                cout << "Conflict !!! \n" ;
            }
        }

        manager.addResource(r);
    }

    manager.report() ;

    return 0 ;
}
