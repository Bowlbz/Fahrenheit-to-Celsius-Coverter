//Bowlby, David Jason COSC 1437
//Dr_Tyson_McMillan Oct 2019
/*Input_Validation_Extended.h Created by Dr.Tyson McMillan, TCC Trinity River Campus. To validate inputs for correct data type.*/

#include <iostream>
#include <iomanip>
#include "Input_Validation_Extended.h"
using namespace std;

double C = 0.0;
double F = 0.0;
char Exit = 0;


int main() 
{
  
  do
  {

   cout << "I can convert Fahrenheit to Celsius.\n" << endl;
    cout << "Please enter a temp for conversion.\n "<< endl;
    F = validateDouble(F); // Input from user
  
    C = ((F - 32.0) * (5.0 / 9.0));// Process 
    cout << fixed << setprecision(4);
    
    //Output to user
    cout << "Your Celsius temp is: "<< C << endl;
    cout << "Do you wish to Convert again? (y/n"<< endl;
    
    cin >> Exit;
  }while (Exit == 'y' || Exit == 'Y');
  

  cout << "\n\x1b[93;4mHave a Great Day!!!!\x1b[0m " << endl;
  cout << "\x1b[31;1m************* " << endl;
  
return 0;
}  



  





