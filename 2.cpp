//Muhammad Ibad Saleem 19K0220 Lab 09 Task 2 

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class PrimeNumber
{
    int Prime;

public:
    PrimeNumber() { Prime = 1; }
    PrimeNumber(int x) { Prime = x; }

    bool isprime(int x)
    {
        if (x == 1)
        {
            cout << "Not prime";
            return false;
        }

        for (int i = 2; i < x - 1; i++)
        {
            int div;
            div = x % i;
            if (div == 0)
            {
                return false;
            }
        }
        return true;
        }

        void setprime(int x)
        {
            if (isprime(x)== true)
            {
                Prime = x;
            }
            else
            {
                cout << "\nNot Prime";
            }    
        }
        
        
        PrimeNumber operator ++(int)
        {
            PrimeNumber P;
            for(int i = Prime+1 ; i < Prime+ 100; i++)
            {
                if (isprime(i)==true)
                {
                    P.setprime(i);
                    return P;
                }   
            }
            return P;
        }

        
        PrimeNumber operator --(int)
        {
            PrimeNumber P;
            for(int i = Prime-1 ; i > 0 ; i--)
            {
                if (isprime(i)==true)
                {
                    P.setprime(i);
                    return P;
                }   
            }
            return P;
        }

        
        PrimeNumber operator ++()
        {
            PrimeNumber P;
            for(int i = Prime+1 ; i < Prime+ 100; i++)
            {
                if (isprime(i)==true)
                {
                    P.setprime(i);
                    return P;
                }   
            }
            return P;
        }

        
        PrimeNumber operator --()
        {
            PrimeNumber P;
            for(int i = Prime-1 ; i > 0 ; i--)
            {
                if (isprime(i)==true)
                {
                    P.setprime(i);
                    return P;
                }   
            }
            return P;
        }
        int getprime()
        {
            return Prime;
        }
};





int main()
{
    PrimeNumber P1(13),P2;
    P2=P1++;
    cout << P2.getprime()<<endl;
    P2=P1--;
    cout << P2.getprime()<<endl;
    P2=++P1;
    cout << P2.getprime()<<endl;
    P2=--P1;
    cout << P2.getprime()<<endl;

}