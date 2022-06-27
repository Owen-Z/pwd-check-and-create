#include "saver.h"
void savePasswordToFile(string pwd){
    cout << "\nDo you want to save the password? (y/n)" << endl;
    string isYes;
    cin >> isYes;
    if(isYes == "y"){
        cout << "please enter the path you want the password to save: " << endl;
        string path, filename;
        cin >> path;
        cout << "please enter the file name you want the password to save: " << endl;
        cin >> filename;
        ofstream(path + "/" + filename);
        fstream saveFile;
        saveFile.open(path + "/" + filename, ios::out);
        if(!saveFile){
            cout << "file doesn't create." << endl;
            exit(1);
        }

        saveFile << pwd << endl;
        saveFile.close();
        cout << "save file successfully!";
    }
}