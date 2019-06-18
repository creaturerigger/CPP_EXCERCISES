//
// Created by volka on 16/06/2019.
//

#include "MISCELLANEOUS.h"

void MISCELLANEOUS::printIntegers() const {
    for(int i=1; i<=30;i++){
        cout << i << " ";
        if(i%7==0){
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
    while(cin.get()!=EOF){
        cin >> cInt;
        result *= cInt;
        counter++;
        if(counter>number){
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
    while(cin.get()!=EOF){
        cin >> number;
        if(number==9999){
            break;
        }else{
            total += number;
            counter++;
        }
    }
    average = static_cast<double>(total)/counter;
    cout << setprecision(6) << fixed;
    cout << "Average of entered integers are : " << average << endl;
}
