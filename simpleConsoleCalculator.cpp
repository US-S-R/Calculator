// betterCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()                            // For basic if-else chains you can substitute with a more efficient switch case
{                                     //For a less clunky UI you should use strings and extract operators and numbers from that string
    double x, y;
    char op;
    int result=0;   //Moved variable up since they are still in the same scope and might as well be together
    
    
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second  number: ";
    cin >> y;

   switch(op) {
       case '+':
        result = x + y;
      break;
       case '-': 
        result = x - y;
      break;
       case '*': 
        result = x * y;
      break;
       case '/':
        result = x / y;
      break;
       default:
           cout<<"Invalid operator"<<endl;
   } //end switch-case
   

    cout << result;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
