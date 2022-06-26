#include<stdio.h>
#include "password.h"

using namespace std;

Password::Password(){
        minLength = 0;
        maxLength = 0;
        hasNumber = true;
        hasLowcaseLetter = true;
        hasUppercaseLetter = true;
        hasSpecialChar = true;
}

void Password::setAttributes(int min, int max, bool hasNum, bool hasLow, bool hasUpper, 
                                bool hasSpecChar){
        minLength = min;
        maxLength = max;
        hasNumber = hasNum;
        hasLowcaseLetter = hasLow;
        hasUppercaseLetter = hasUpper;
        hasSpecialChar = hasSpecChar;
}

