#include "generator.h"

#include<iostream>

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

string generatorPassword(Password &pwd){
    srand(time(nullptr));

    // set the password length
    int length = pwd.getMin() + rand() % (pwd.getMax() - pwd.getMin());

    
}