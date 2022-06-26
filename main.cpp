#include<stdio.h>
#include<iostream>
#include "interface.h"
#include "password.h"
#include "generator.h"

using namespace std;

int main(){
    showMainFrame();

    int funcNum = 0;    // the number to record user choice
    cin >> funcNum;

    // TODO add exception
    if(funcNum == 1){   // generator function
        showGeneratorFrame();
        Password pwd;
        initPassword(pwd);
        string strOfPwd;
        
    }else if(funcNum == 2){

    }



    return 0;
}
