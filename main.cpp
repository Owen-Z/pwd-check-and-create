#include<stdio.h>
#include<iostream>
#include "interface.h"
#include "password.h"
#include "generator.h"
#include "saver.h"
#include "validator.h"

using namespace std;

int main(){
    showMainFrame();

    int funcNum = 0;    // the number to record user choice
    cin >> funcNum;

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

    return 0;
}
