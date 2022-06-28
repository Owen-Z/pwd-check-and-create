#include "saver.h"
#include<filesystem>
namespace fs = std::filesystem;
// TODO add file valid judgement
void savePasswordToFile(string pwd){
    cout << "\nDo you want to save the password? (y/n)" << endl;
    string isYes;
    cin >> isYes;
    while(isYes != "y" && isYes != "n"){
        cout << "please 'y' or 'n'\n";
        cin >> isYes;
    }


    if(isYes == "y"){
        cout << "please enter the path you want the password to save: " << endl;
        string path, filename;
        cin >> path;
        fs::file_status status = fs::status(path);
        while(!fs::is_directory(status)){
            cout << "please enter the correct path: ";
            cin >> path;
            cout << endl;
            status = fs::status(path);
        }
        cout << "please enter the file name you want the password to save: " << endl;
        cin >> filename;
        ofstream(path + "/" + filename);
        fstream saveFile;
        saveFile.open(path + "/" + filename, ios::out | ios::in);
        if(!saveFile){
            cout << "file doesn't create." << endl;
            exit(1);
        }
        saveFile.seekp(0, std::ios_base::end);
        saveFile << pwd << endl;
        saveFile.close();
        cout << "save file successfully!";
    }
}