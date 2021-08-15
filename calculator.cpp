#include<iostream>

using namespace std;

int main()
{

int number1, number2, selection;

cout << "Please enter an integer: ";
cin >> number1;

cout << "Please enter another integer: ";
cin >> number2;

cout << "\n\n\n";

cout << "Select the desired function:\n";
cout << "1. Addition\n";
cout << "2. Subtraction\n";
cout << "3. Multiplication\n";
cout << "4. Division\n";
cout << "5. Modular Division\n";
cout << "Selection: ";
cin >> selection;

cout << "\n\n\n";

switch(selection)
{
case 1:
cout << "The sum of " << number1 << " and " << number2 << " is " << number1+number2 << endl;
break;
case 2:
cout << "The difference of " << number1 << " and " << number2 << " is " << number1-number2 << endl;
break;
case 3:
cout << "The product of " << number1 << " and " << number2 << " is " << number1*number2 << endl;
break;
case 4:
cout << "The quotient of " << number1 << " and " << number2 << " is " << number1/number2 << endl;
break;
case 5:
cout << "The remainder of " << number1 << " and " << number2 << " is " << number1%number2 << endl;
break;
default:
cout << "Invalid selection\n";
}
return 0;
}
