/* CODSOFT Internships:
Task 1 : A simple calculator
Authored by- Rishika Thakur
*/
#include <iostream>
using namespace std;

int main() {
    char oper;
    float x , y;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    cout << "Choose the operation to be performed(+, -, *, /) : " << endl;
    cin >> oper;

    switch(oper) {
        case '+': // Addition
        cout << x << " + " << y << " = " << x + y;
        break;

        case '-': // Subtraction
        cout << x << " - " << y << " = " << x - y;
        break;

        case '*': // Multiplication
        cout << x << " * " << y << " = " << x * y;
        break;

        case '/': // Division
        cout << x << " / " << y << " = " << x / y;
        break;
        
        default:
        cout << "Error! The operator is not correct ";
        break;
    }
    
    
    return 0;
}