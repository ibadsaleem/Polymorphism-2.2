//Muhammad Ibad Saleem 19K0220 Lab 09 Task 6 

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class Meal{
    int calorie;
    string name;
    friend ostream &operator<<(ostream &output, Meal &M);           //prototypes
    friend istream &operator>>(istream &input, Meal &M);

public:
    Meal()                  //default constructor
    {
        name="No Name";
        calorie = 0000;
    }

    Meal(int c, string n)               //parameterized constructor
    {
        name = n;
        calorie = c;

    }

    Meal operator + (Meal M)
    {
        Meal M1;
        M1.calorie = M.calorie + calorie;
        M1.name = M.name;
        return M1;
    }
    
    // void setname(string x)
    // {
    //     name = x;
    // }
    
    

};
        
       ostream &operator<<( ostream &output,  Meal &M )            //friend 1 
      {
        output << "Calorie : " << M.calorie <<endl << "Name : " << M.name;
        return output;            
      }

      istream &operator>>( istream &input,  Meal &M )   //friend 2
      {
          cout << "Enter Calorie: ";
          input >> M.calorie;
          cout << "Enter Name: ";
          input >> M.name;
      }

int main()
{
                                //asMeal.cpp

                                

    // Meal breakfast(2456,"Ibad"), lunch(2456,"Ibad"), dinner(2456,"Ibad"), Total;

    // Total = breakfast + lunch + dinner;
    // cout << breakfast<<endl;
    //  cout << lunch<<endl;
    //   cout << dinner<<endl;
    //    cout << Total<<endl;  

                                        
                                        
                                        //asMeal2.cpp



    Meal Eat[21],Total;
    for (int i = 0; i < 21;i++)
    {       
    //    cin >> Eat[i];                    for input
    //     Total = Total + Eat[i];
        Eat[i]={2435, "Ibad"};              //constructor calling
        Total = Total + Eat[i];
    }

    cout << Total;



}