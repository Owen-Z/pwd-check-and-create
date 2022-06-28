#include "interface.h"
#include<stdio.h>
#include<iostream>
#include "password.h"
#include "generator.h"
#include "saver.h"
#include "validator.h"


using namespace std;

void showGeneratorFrame(){
    system("clear");
    cout << "\t-------------------------------------------\n\n";
    cout << "\t            password generator \n\n";
    cout << "\t-------------------------------------------\n\n";
    
}

void showValidatorFrame(){
    system("clear");
    cout << "\t-------------------------------------------\n\n";
    cout << "\t            password validator \n\n";
    cout << "\t-------------------------------------------\n\n";
}

void showSavePasswordFrame(string pwd){
    system("clear");
    cout << "\t-------------------------------------------\n\n";
    cout << "\t            password generator \n\n";
    cout << "\t-------------------------------------------\n\n";
    cout << "\tThe generated password is:  " << pwd;
}

void showMainFrame(){
    system("clear");
    cout << "\t-------------------------------------------\n\n";
    cout << "\t     password generator and validator \n\n";
    cout << "\t-------------------------------------------\n\n";
    cout << "what function do you want to use?\n";
    cout << "enter 1 to generator, enter 2 to validator\n";
    int funcNum = 0;    // the number to record user choice
    cin >> funcNum;
    while(funcNum != 1 && funcNum != 2){
        cout << "you enter the wrong to select the function\n";
        cout << "please enter 1 to generator, enter 2 to validator\n";
        cin >> funcNum;
    }

    // TODO add exception
    string strOfPwd;
    if(funcNum == 1){   // generator function
        showGeneratorFrame();
        Password pwd;
        initPassword(pwd);
        strOfPwd = generatorPassword(pwd);
        showSavePasswordFrame(strOfPwd);
        savePasswordToFile(strOfPwd);
    }else if(funcNum == 2){
        showValidatorFrame();
        Password pwd;
        validatePwd();
    }

}




