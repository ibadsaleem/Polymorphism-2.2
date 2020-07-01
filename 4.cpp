//Muhammad Ibad Saleem 19K0220 Lab 09 Task 4

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class PhoneCall{
    int phn;
    float length;
    float rate;

    public:

    PhoneCall()
    {
    }

    bool operator == (PhoneCall P1)
    {
        PhoneCall P;
        if (P1.phn==phn)
        {
		return true;
	}
        else
        {
        return false;
        }
    }
    void setphn(int x)
    {
        phn=x;
    }
	int getphn()
    {
	    return phn;
    }
};

int main()
{
    int num;
    PhoneCall P[10];
    for (int i=0;i<10;i++)
    {
        cout<<"Enter Number (8 digits) "<<i+1<<": ";
        cin>>num;
	 else
         {

        P[i].setphn(num);
         }

        for ( int j= 0; j < i; ++j )
	{ 
         if ( P[i] == P[j] ) {
		 i--;
		 cout << "Duplicate number information ignored. Try again." << endl;
		 break; 
	 }
	 
	}
    }





}