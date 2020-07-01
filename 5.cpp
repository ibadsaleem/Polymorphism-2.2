//Muhammad Ibad Saleem 19K0220 Lab 09 Task 5

#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
using namespace std;



class NumDays{
    int hourwork;
    public:
    NumDays(){}
    NumDays(int x)
    {
        hourwork = x;
    }

    void sethour(int x)
    {
        hourwork = x;
    }

    int gethour()
    {
        return hourwork;
    }

    float hourtoday(int x)
    {
        float days;
        days = float(x) / 8;
        return days;
    }

    NumDays operator + (NumDays N1)
    {
        NumDays N;
        N.hourwork = hourwork + N1.hourwork;
        return N;
    }
    NumDays operator - (NumDays N1)
    {
        NumDays N;
        N.hourwork = hourwork - N1.hourwork;
        return (N);
    }

    void operator ++ (int)              //postfix
    {
        hourwork++;

    }

     NumDays operator++ ()              //prefix
       {
        NumDays N;
        N.hourwork=++hourwork;
        return N;
        }


    void operator --(int x)     //postfix
    {
        hourwork--;
    }
    
     NumDays operator-- ()              //prefix
    {
        NumDays N;
        N.hourwork=--hourwork;
        return N;
        }

};

int main()
{
    system("cls");
    NumDays N(26),N1(28),N2;
    //float a = N1.hourtoday(24);
   // cout << a;
    N1++;
    cout<<"Hours: "<<N1.gethour()<<endl;
    cout <<"Days: "<<N1.hourtoday(N1.gethour()) << endl<< endl;
    N1--;
    cout<<"Hours: "<<N1.gethour()<<endl;
    cout <<"Days: "<<N1.hourtoday(N1.gethour()) << endl<< endl;
    N2 = N + N1;
    cout<<"Hours: "<<N2.gethour()<<endl;
    cout <<"Days: "<<N2.hourtoday(N2.gethour()) << endl<< endl;
    N2 = N - N1;
    cout<<"Hours: "<<abs(N2.gethour())<<endl;
    cout <<"Days: "<<N2.hourtoday(abs(N2.gethour())) << endl<< endl;
    --N1;
    cout<<"Hours: "<<N1.gethour()<<endl;
    cout <<"Days: "<<N1.hourtoday(N1.gethour()) << endl<< endl;
    ++N1;
    cout<<"Hours: "<<N1.gethour()<<endl;
    cout <<"Days: "<<N1.hourtoday(N1.gethour()) << endl<< endl;
}