//
// Created by volkan on 16/06/2019.
//

#include "EULERSNUMBER.h"

void EULERSNUMBER::findEulerNumber() const {
    cout << "Enter number of terms to calculate approximate value of euler number (-1 to quit): ";
    int n = 0;
    cin >> n;
    while (n != -1) {
        if (n == 0 || n < -1) {
            cout << "You have to enter a positive number" << endl;
        } else {
            int denominator = 1;
            int denomtemp = 1;
            int denomresult = 1;
            double eulernumber = 1.0;
            while (n != 0) {
                // setting denominator for each iteration with a while loop
                while (denomtemp != 0) {
                    denomresult *= denomtemp;
                    denomtemp--;
                }
                eulernumber += 1.0 / denomresult;
                denomresult = 1;
                denominator++;
                denomtemp = denominator;
                n--;
            }
            cout << setprecision(15) << fixed;
            cout << "Approximate value of euler number is : " << eulernumber << endl;
            double relativeError = (abs(ACTUAL_EULER_NUMBER - eulernumber) / ACTUAL_EULER_NUMBER) * 100;
            cout << "Relative error of the result in percentage is : " << relativeError << endl;
            cout << "Relative error of the result in real is : " << relativeError / 100 << endl;
        }
        cout << "Enter number of terms to calculate approximate value of euler number (-1 to quit): ";
        cin >> n;
    }
}
