//
// Created by volka on 16/06/2019.
//

#include "MISCELLANEOUS.h"

void MISCELLANEOUS::printIntegers() const {
    for(int i=1; i<=30;i++){
        cout << i << " ";
        if(i%7){
            cout << endl;
        }
    }
}
