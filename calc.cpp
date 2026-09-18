#include <iostream>
using namespace std;
int main() {
    cout << R"(   ______  _____     _____          ______         __          )" << endl;
    cout << R"( .' ___  ||_   _|   |_   _|       .' ___  |       [  |         )" << endl;
    cout << R"(/ .'   \_|  | |       | | ______ / .'   \_| ,--.   | |  .---.  )" << endl;
    cout << R"(| |         | |   _   | ||______|| |       `'_\ :  | | / /'`\] )" << endl;
    cout << R"(\ `.___.'\ _| |__/ | _| |_       \ `.___.'\// | |, | | | \__.  )" << endl;
    cout << R"( `.____ .'|________||_____|       `.____ .'\'-;__/[___]'.___.' )" << endl;
    cout << "" << endl;
    double a, b;
    char op;
    cout << "Enter a first number: ";
    cin >> a;
    cout << "Choose (+, -, *, /): ";
    cin >> op;
    cout << "Enter a second number: ";
    cin >> b;
    double result;
    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '*') {
        result = a * b;
    } else if (op == '/') {
        if (b != 0) {
            result = a / b;
        } else {
            cout << "Error: 1" << endl;
            return 1;
        }
    } else {
        cout << "Error: 404" << endl;
        return 1;
    }
    cout << "Result: " << result << endl;
    return 0;
}
