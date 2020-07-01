//Muhammad Ibad Saleem 19K0220 Lab 09 Task 1 

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class Location{

    int latitude;
    int longitude;
    
    public:
    
    friend Location operator+ (int x , Location L1);
    Location(){}
    Location(int a, int b)
    {
        latitude=a;
        longitude=b;

    }

    virtual void Display()
    {
        cout<<"Latitude: "<<latitude;
        cout<<"\nLongitude: "<<longitude<<endl<<endl;
    }

    void operator ++ (int)
    {
        latitude++;
        longitude++;
    }

     void operator ++ ()
    {
        ++latitude;
        ++longitude;
    }

      
    
      Location operator = (Location L1)
   {
      Location L;
      latitude=L1.latitude;
      longitude=L1.longitude;
      L.latitude=L1.latitude;
      L.longitude=L1.longitude;
     return L ;
 }
    Location operator + (int x )
    {
        Location L;
            L.latitude=latitude+x;
            L.longitude=longitude+x;
            return L;
    }
    
    

};

Location operator + (int x , Location L1)
    {
        Location L;
        L.latitude=10+L1.latitude;
        L.longitude=10+L1.longitude;
        return L;

    }


class Details: public Location{
        string address;
        public:
        Details(){}
        Details(string a,int lon,int lat) : Location(lat,lon)
        {
         
            address=a;
        
        }
        
        void Display()
        {
            Location::Display();              
        
            cout<<"Address: "<<address;
        }

    

};


int main()
{

    Details D1("Bhains Colony",24,27);                          //assumed address as integer and with value of 28 
    
    Location obj1(10,20),obj2(5,30),obj3(90,90),*op;
    obj1++;
    
    obj1.Display();
    ++obj1;
    
    obj2=obj1;
    obj2.Display();
    
    obj2 = obj1+10;
    obj2.Display();
    
    obj2=10+obj1;
    obj2.Display();
    
    obj1=obj2=obj3;
    cout<<endl<<"Same Objects\n\n";
    obj1.Display();
    obj2.Display();
    obj3.Display();
    
    //---------------------------------------------------------------------
    
    op=&D1;
    op->Display();



    


    
    return 0;
}