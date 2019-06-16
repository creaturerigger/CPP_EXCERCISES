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
