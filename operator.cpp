#include <iostream>
using namespace std;

void arithmetic(){
    int x, y;

    cout << "\n\t\t\t\t*** ARITHMETIC OPERATORS ***\n" << endl;
    cout << "\t\t\t\t% -> to perform modulus" << endl;
    cout << "\t\t\t\t* -> to perform multiplication" << endl;
    cout << "\t\t\t\t/ -> to perform division" << endl;
    cout << "\t\t\t\t+ -> to perform addition" << endl;
    cout << "\t\t\t\t- -> to perform subtraction" << endl;

    cout << "\nEnter two numbers separated by space (x, y): ";
    cin >> x >> y;

    cout << "\n\tMod of x % y = " << (x % y) << endl;
    cout << "\tProduct of x * y = " << (x * y) << endl;
    cout << "\tQuotient  of x / y = " << (x / y) << endl;
    cout << "\tAddition of x + y = " << (x + y) << endl;
    cout << "\tSubtraction of x - y = " << (x - y) << endl;
}

void relational(){
    int x, y;

    cout << "\n\t\t\t\t--> RELATIONAL OPERATORS <--\n" << endl;

    cout << "\t\t\t\t<   less than --> expression --> x < y" << endl;
    cout << "\t\t\t\t<=  less than or equal to --> expression --> x <= y" << endl;
    cout << "\t\t\t\t>   greater than --> expression --> x > y" << endl;
    cout << "\t\t\t\t>=  greater than of equal to --> expression --> x >= y" << endl;
    cout << "\t\t\t\t==  equal to --> expression --> x == y" << endl;
    cout << "\t\t\t\t!=  not equal to --> expression --> x != y" << endl;

    cout << "\nEnter two numbers separated by space to test (x, y): ";
    cin >> x >> y;

    if(x < y) cout << "\n\t" << x << " is less than to " << y << endl;
    if(x <= y) cout << '\t' << x << " is less than or equal to " << y << endl;
    if(x > y) cout << '\t' << x << " is greater than to " << y << endl;
    if(x >= y) cout << '\t' << x << " is greater than or equal to " << y << endl;
    if(x == y) cout << '\t' << x << " is equal to " << y << endl;
    if(x != y) cout << '\t' << x << " is not qual to " << y << endl;
}

void logical(){
    int x, y;

    cout << "\n\t\t\t\t--> LOGICAL OPERATORS <--\n" << endl;

    cout << "\t\t\t\t&&   AND --> expression --> x && y" << endl;
    cout << "\t\t\t\t||   OR --> expression --> x || y" << endl;
    cout << "\t\t\t\t!   NOT --> expression --> !x " << endl;

    cout << "\nEnter two numbers separated by space to test (x, y): ";
    cin >> x >> y;

    if(x < y && y > x) cout << "\n\tx < y && y > x  --> return TRUE if both condition is true otherwise FALSE" << endl;
    if(x < y || y < x) cout << "\tx < y || y < x  --> return TRUE if one condition is true otherwise FALSE" << endl;
    if(!(x < y) || y > x) cout << "\t!(x < y) || y < x  --> return the opossite if true then FALSE, if false then TRUE" << endl;
}