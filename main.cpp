#include <iostream>
using namespace std;

char operation;
long long int number1, number2, sum;

int main() {

  cout << "Enter first number: ";
  cin >> number1;
  cout << "Enter second number: ";
  cin >> number2;
  cout << "Enter an operation (+, -, *, /): ";
  cin >> operation;

  switch (operation) {

  case '+':
    sum = number1 + number2;
    cout << "Result: " << sum << endl;
    break;
  case '-':
    sum = number1 - number2;
    cout << "Result: " << sum << endl;
    break;
  case '*':
    sum = number1 * number2;
    cout << "Result: " << sum << endl;
    break;
  case '/':
    if (number2 != 0) {
      sum = number1 / number2;
      cout << "Result: " << sum << endl;
    } else {
      cout << "Error: Division by zero is not allowed." << endl;
    }
    break;
  default:
    cout << "Error: Invalid operation." << endl;
    break;
  }

  return 0;
}