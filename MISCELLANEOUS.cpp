//
// Created by volka on 16/06/2019.
//

#include "MISCELLANEOUS.h"

void MISCELLANEOUS::printIntegers() const {
    for (int i = 1; i <= 30; i++) {
        cout << i << " ";
        if (i % 7 == 0) {
            cout << endl;
        }
    }
}

void MISCELLANEOUS::integersProduct() const {
    cout << "Enter integers to calculate product of them. " << endl
         << "Your first entry will determine number of integers. " << endl;
    int number = 0;
    cin >> number;
    int result = 1;
    int cInt = 0;
    int counter = 1;
    while (cin.get() != EOF) {
        cin >> cInt;
        result *= cInt;
        counter++;
        if (counter > number) {
            break;
        }
    }
    cout << "Product of all integers you have entered is -> " << result << endl;
}

void MISCELLANEOUS::averageIntegers() const {
    cout << "Enter integers to calculate average of them. " << endl
         << "To end the process enter '9999'" << endl;
    int number = 0;
    cin >> number;
    int counter = 0;
    int total = 0;
    double average = 0;
    while (cin.get() != EOF) {
        cin >> number;
        if (number == 9999) {
            break;
        } else {
            total += number;
            counter++;
        }
    }
    average = static_cast<double>(total) / counter;
    cout << setprecision(6) << fixed;
    cout << "Average of entered integers are : " << average << endl;
}

void MISCELLANEOUS::largestNumber() const {
    cout << "Enter integers to find the largest entered integer:" << endl
         << "The first number determines number of the integers to be entered." << endl;
    int numberOfElements = 0;
    cin >> numberOfElements;
    int counter = numberOfElements;
    int largest = 0;
    int exNumber = 0;
    int newNumber = 0;
    while (cin.get() != EOF) {
        cin >> newNumber;
        if (counter == numberOfElements) {
            exNumber = newNumber;
            largest = exNumber;
        } else {
            if (newNumber > exNumber) {
                largest = newNumber;
                exNumber = largest;
            } else {
                largest = exNumber;
            }
        }
        counter--;
        if (counter == 0) {
            break;
        }
    }
    cout << "Largest of entered integers is: " << largest << endl;
}

void MISCELLANEOUS::productOfEvenNumbers() const {
    int product = 1;
    for (int i = 1; i <= 15; i++) {
        if (i % 2 == 0) {
            product *= i;
        } else {
            continue;
        }
    }
    cout << "Product of even numbers between 1-15 is: " << product << endl;
}

void MISCELLANEOUS::findFactorial() const {
    cout << setw(5) << "Number" << setw(15) << "Factorial" << endl;
    for (int i = 1; i <= 7; i++) {
        int factorial = 1;
        for(int j = 1; j<=i;j++){
            factorial *= j;
        }
        cout << setw(5) << right << i << setw(15) << right << factorial << endl;
    }
}
