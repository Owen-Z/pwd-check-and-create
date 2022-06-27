#include<stdio.h>
#include<iostream>
#include "interface.h"
#include "password.h"
#include "generator.h"
#include "saver.h"

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

    }else if(funcNum == 2){

    }

    showSavePasswordFrame(strOfPwd);
    savePasswordToFile(strOfPwd);




    return 0;
}
