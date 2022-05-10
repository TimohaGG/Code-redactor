#include"functions.h"

void launchProgram(string filename_exe, string filename) {
    string command = "g++ -o " + filename_exe + " " + filename;
    system(command.c_str());
    command = "start " + filename_exe;
    system(command.c_str());
}

void editProgram(string filename_exe, string filename) {
    ifstream f1(filename, ios::in);
    string buffer;
    while (getline(f1,buffer)) {
        cout << buffer<<endl;
    }
}