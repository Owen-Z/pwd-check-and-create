#include "validator.h"
bool validKind(bool *hasKind, string pwd){
    bool realHasKind[4];

    // judge each item of password is valid 
    for(const auto item : pwd){
        if(*hasKind == true){
            char min = 48;
            char max = 57;
            if(item >= min && item <= max){
                realHasKind[0] = true;
                continue;
            } 
        }

        if(*(hasKind + 1) == true){
            char min = 97;
            char max = 122;
            if(item >= min && item <= max){
                realHasKind[1] = true;
                continue;
            } 
        }

        if(*(hasKind + 2) == true){
            char min = 65;
            char max = 90;
            if(item >= min && item <= max){
                realHasKind[2] = true;
                continue;
            } 
        }

        if(*(hasKind + 3) == true){
            char min = 33;
            char max = 47;
            if(item >= min && item <= max){
                realHasKind[3] = true;
                continue;
            } 
        }
        return false;
    }

    // judge the password real has all needed kinds
    for(int i = 0; i < 4; ++i){
        if(hasKind[i] != realHasKind[i]) return false;
    }


    return true;
}

void validatePwd(){
    cout << "please enter the password you create: ";

    string pwd; 
    cin >> pwd ;
    
    int min, max;
    bool hasKind[4]; // hasKind[0] --> hasNum  [1]-->hasLowLetter
                     // [2]-->hasUpperLetter [4]-->hasSpecialChar       


    string temp; // the tempature string to load yes or no

    cout << "\nWhat's the minimum length of the password:  ";
    cin >> min;
    cout << "\nWhat's the maximum length of the password:  ";
    cin >> max;
    cout << "\nIs the password requesting number? (y/n)" << endl;
    cin >> temp;
    hasKind[0] = (temp == "y" ? true : false);
    cout << "Is the password requesting lowercase letter? (y/n)" << endl;
    cin >> temp;
    hasKind[1] = (temp == "y" ? true : false);
    cout << "Is the password requesting uppercase letter? (y/n)" << endl;
    cin >> temp;
    hasKind[2] = (temp == "y" ? true : false);
    cout << "Is the password requesting special character? (y/n)" << endl;
    cin >> temp;
    hasKind[3] = (temp == "y" ? true : false);
    if(pwd.length() < min || pwd.length() > max) cout << "The Password is not valid!" << endl;

    for(int i = 0; i < 4; ++i){
        if(!validKind(hasKind, pwd)){
            cout << "The Password is not valid!" << endl;
            return;
        } 
        
    }

    cout << "The Password is valid!" << endl;
    savePasswordToFile(pwd);
}

