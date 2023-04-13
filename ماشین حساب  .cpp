#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream> 

using namespace std;

int main()
{
    string input;
    double num1, num2, zakhireh1, num3, zavie, radian;
    int num4, num5, zakhireh2;
    cout << "what is the order ?" << endl;
    cin >> input;
    if (input == "+")
    {
        cout << "inputs :" << endl;
        cin >> num1;
        cin >> num2;
        cout << "output :" << endl;
        cout << num1 + num2;
    }
    if (input == "-")
    {
        cout << "inputs :" << endl;
        cin >> num1;
        cin >> num2;
        cout << "output :" << endl;
        cout << num1 - num2;
    }
    if (input == "*")
    {
        cout << "inputs :" << endl;
        cin >> num1;
        cin >> num2;
        cout << "output :" << endl;
        cout << num1 * num2;
    }
    if (input == "/")
    {
        cout << "inputs :" << endl;
        cin >> num1;
        cin >> num2;
        cout << "output :" << endl;
        cout << num1 / num2;
    }
    if (input == "%")
    {
        cout << "inputs :" << endl;
        cin >> num4;
        cin >> num5;
        cout << "output :" << endl;
        cout << num4 % num5;
    }
    if (input == "^")
    {
        cout << "inputs :" << endl;
        cin >> num1;
        cin >> num2;
        cout << "output :" << endl;
        cout << pow(num1, num2);
    }
    if (input == "<<")
    {
        cout << "inputs :" << endl;
        cin >> num4;
        cin >> num5;
        zakhireh2 = num4 << num5;
        cout << "output :" << endl;
        cout << zakhireh2;
    }
    if (input == ">>")
    {
        cout << "inputs :" << endl;
        cin >> num4;
        cin >> num5;
        zakhireh2 = num4 >> num5;
        cout << "output :" << endl;
        cout << zakhireh2;
    }
    if (input == "&")
    {
        cout << "inputs :" << endl;
        cin >> num4;
        cin >> num5;
        zakhireh2 = num4 & num5;
        cout << "output :" << endl;
        cout << zakhireh2;
    }
    if (input == "|")
    {
        cout << "inputs :" << endl;
        cin >> num4;
        cin >> num5;
        zakhireh2 = num4 | num5;
        cout << "output :" << endl;
        cout << zakhireh2;
    }
    if (input == "sin")
    {
        cout << "inputs :" << endl;
        cin >> zavie;
        radian = (M_PI * zavie) / 180;
        cout << "output :" << endl;
        cout << sin(radian);
    }
    if (input == "cos")
    {
        cout << "inputs :" << endl;
        cin >> zavie;
        radian = (M_PI * zavie) / 180;
        cout << "output :" << endl;
        cout << cos(radian);
    }
    if (input == "tan")
    {
        cout << "inputs :" << endl;
        cin >> zavie;
        radian = (M_PI * zavie) / 180;
        cout << "output :" << endl;
        cout << tan(radian);
    }
    return 0;
}