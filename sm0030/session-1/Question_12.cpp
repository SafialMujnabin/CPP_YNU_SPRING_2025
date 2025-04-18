#include <iostream>

using namespace std;

int main() {
  double num1, num2;
  char operation;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "Enter operation (+, -, *, /): ";
  cin >> operation;

  switch (operation) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;
    case '/':
      if (num2 != 0)
        cout << num1 << " / " << num2 << " = " << num1 / num2;
      else
        cout << "Division by zero is not allowed.";
      break;
    default:
      cout << "Invalid operation.";
  }

  return 0;
}