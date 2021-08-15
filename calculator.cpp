#include<iostream>

using namespace std;

int main()
{

int num1, num2, selection;

cout << "Please enter an integer: ";
cin >> num1;

cout << "Please enter another integer: ";
cin >> num2;

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
cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << endl;
break;
case 2:
cout << "The difference of " << num1 << " and " << num2 << " is " << num1-num2 << endl;
break;
case 3:
cout << "The product of " << num1 << " and " << num2 << " is " << num1*num2 << endl;
break;
case 4:
cout << "The quotient of " << num1 << " and " << num2 << " is " << num1/num2 << endl;
break;
case 5:
cout << "The remainder of " << num1 << " and " << num2 << " is " << num1%num2 << endl;
break;
default:
cout << "Invalid selection\n";
}
return 0;
}
