#include <iostream>
using namespace std;

void FacArr(){
    int number, factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    int myArray[number];

    for(int i = 1; i <= number; i++){
        myArray[i] = i;
        myArray[number] = myArray[i];
    }

    if(number >= 1){ 
        for(int j = 1; j <= number; j++) factorial *= myArray[j];
        cout << "The Factorial of N is: " << factorial;
    } else cout << "TO COMPUTE FACTORIAL, \
MUST BE INTEGER OR MORE THAN/EQUAL TO 1";
}

void sumofN(){
    int number, sum = 0;

    cout << "Enter a size in number: ";
    cin >> number;

    int array[number];

    cout << "Enter a integers: ";
    for(int i = 0; i < number; i++) cin >> array[i];

    for(int j = 0; j < number; j++) sum += array[j];
    cout << "The sum of N is: " << sum;
}
