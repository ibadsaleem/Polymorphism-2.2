//Muhammad Ibad Saleem 19K0220 Lab 09 Task 3 

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Time{
    int hour;
    int min;
    int sec;
    
    public:
    Time(){}
    Time(int a, int b, int c)
    {
        hour=a;
        min=b;
        sec=c;
    }


    void currenttime()
    {
        if (hour>24)
        {
            hour=hour -24;

        }
        if (min>60)
        {
            min=min-60;
        }
        if (sec>60)
        {
            sec=sec-60;
        }

        
        cout<<"Time in hr::min::sec: "<<hour<<"::"<<min<<"::"<<sec;   
    }   


    Time operator + (Time T1)
    {
            Time T;
            T.hour=T1.hour+hour;
            T.min=T1.min+min;
            T.sec=T1.sec+sec;
            return T;
    }
    string operator < (Time T1)
    {
        if (hour < T1.hour)
        {
           cout<< "Time 2 is greater left hand side";
        }
        else{
            cout<<"Time 1 is greater right hand side";
        }          
        if (hour==T1.hour)
        {
            if (min<T1.min)
            {
                cout<<"Time 1 is greater";
            }
            else if (min==T1.min)
            {
                if (sec<T1.sec)
                {
                    cout<<"Time 1 is greater";
                }
            }
        }
        
    }
};


int main()
{
    Time T1(14,2,6),T2(12,54,32),T3;          
    T3=T1+T2;
    T3.currenttime();
    cout<<endl;
    T1<T2;
    















}