#include "generator.h"

#include<iostream>
#include<time.h>

using namespace std;

void initPassword(Password &pwd){
    int min, max;
    bool hasNum = false, hasLow = false, hasUpper = false, hasSpec = false;
    char temp;
    cout << "please select your password request below\n";
    cout << "please enter the minimum length of your password: ";
    cin >> min;
    cout << endl << "please enter the maxmimum length of your password: ";
    cin >> max;
    cout << endl << "the password need number? (y / n)\n";
    cin >> temp;
    hasNum = (temp == 'y' ? true : false);
    cout << endl << "the password need lowercase letter? (y / n)\n";
    cin >> temp;
    hasLow = (temp == 'y' ? true : false);
    cout << endl << "the password need uppercase letter? (y / n)\n";
    cin >> temp;
    hasUpper = (temp == 'y' ? true : false);
    cout << endl << "the password need sepcial? (y / n)\n";
    cin >> temp;
    hasSpec = (temp == 'y' ? true : false);

    pwd.setAttributes(min, max, hasNum, hasLow, hasUpper, hasSpec);
}

int judgeNeeded(bool attr){
    return attr == true ? 1 : 0;
}

int setNumOfKindsPassword(int *numOfKind, bool hasKind, int *remainLength){
    if(hasKind){
        if(*numOfKind == 1) return *remainLength;
        int currentKindLength = rand() % (*remainLength - *numOfKind + 1) + 1;
        (*numOfKind)--;
        *remainLength = *remainLength - currentKindLength;
        return currentKindLength;
    }

    return 0;
}

char randNum(){
    srand(rand());
    char c = rand() % 10 + 48;
    return c;
}

char randLowLetter(){
    srand(rand());
    char c = rand() % 26 + 97;
    return c;
}

char randHighLetter(){
    srand(rand());
    char c = rand() % 26 + 65;
    return c;
}

char randSpec(){
    srand(rand());
    char c = rand() % 14 + 34;
    return c;
}

char randIndexContent(int kind){
    if(kind == 0) return randNum();
    if(kind == 1) return randLowLetter();
    if(kind == 2) return randHighLetter();
    if(kind == 3) return randSpec();
    return 'n';
}


void setEachIndexOfPwd(string &pwd, int* numOfKind){
    srand(rand());
    for(int i = 0; i < pwd.length(); ++i){
        int kind = rand() % 4;
        time_t startTime = time(NULL);
        while(time(NULL) - startTime < 2){
            srand(rand());
            if(*(numOfKind + kind) > 0){
                pwd[i] = randIndexContent(kind);
                *(numOfKind + kind) = *(numOfKind + kind) - 1;
                break;
            }
            kind = rand() % 4;
        }
    }
}

string generatorPassword(Password &pwd){
    srand(time(nullptr));

    // set the password length
    int length = pwd.getMin() + rand() % (pwd.getMax() - pwd.getMin() + 1);
    int startLength = length;

    // set the number of needed kind number
    int numOfKindNeeded = 0;
    numOfKindNeeded += judgeNeeded(pwd.hasLow()) + judgeNeeded(pwd.hasUpper()) 
                        + judgeNeeded(pwd.hasNum()) + judgeNeeded(pwd.hasSpec());
    
    int kindsLength[4]{setNumOfKindsPassword(&numOfKindNeeded, pwd.hasNum(), &length),
                        setNumOfKindsPassword(&numOfKindNeeded, pwd.hasLow(), &length),
                        setNumOfKindsPassword(&numOfKindNeeded, pwd.hasUpper(), &length),
                        setNumOfKindsPassword(&numOfKindNeeded, pwd.hasSpec(), &length)};
    
    string createdPassword(startLength, 'n');
    setEachIndexOfPwd(createdPassword, kindsLength);
    return createdPassword;
}



