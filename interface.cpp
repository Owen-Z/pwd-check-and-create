#include "interface.h"
#include<stdio.h>
#include<iostream>


using namespace std;


void showMainFrame(){
    cout << "\t-------------------------------------------\n\n";
    cout << "\t     password generator and validator \n\n";
    cout << "\t-------------------------------------------\n\n";
    cout << "what function do you want to use?\n";
    cout << "enter 1 to generator, enter 2 to validator\n";
}

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


