#include"functions.h"

void showCode(string filename) {
    ifstream f1(filename, ios::in);
    string buffer;
    while (getline(f1,buffer)) {
        cout << buffer<<endl;
    }
}

void launchProgram(string filename_exe, string filename) {
    string command = "g++ -o " + filename_exe + " " + filename;
    system(command.c_str());
    command = "start " + filename_exe;
    system(command.c_str());
}

void replaceStr(string& filename) {
    ifstream f1(filename, ios::in);
    string buffer;
  
    cout << "Ваш код: " << endl;
    showCode(filename);
    int counter = 0;
    while (getline(f1, buffer)) {
        counter++;

    }
    f1.close();
    ifstream f2(filename, ios::in);
    string* buf = new string[counter];
    for (size_t i = 0;i<counter ; i++)
    {
        getline(f2, buf[i]);
    }
    f2.close();
    int choise;
    do {
        cout << "Какую строку заменить?(0-" << counter-1 << ")" << endl;
        cin >> choise;
    } while (choise<0 || choise>counter);
    cout << "Введите новую строку"<<endl;
    string newStr;
    cin.ignore();
    getline(cin, newStr);
   
    ofstream f3(filename,ios::out);

    for (size_t i = 0; i<counter; i++)
    {
        if (i == choise) {
            f3 << newStr;
            
        
        }
        else {
            f3 << buf[i];
        }
        f3 << "\n";
    }
    f3.close();
    delete[] buf;
}

void addCode(string filename) {
    ofstream f1(filename, ios::app);
    string buffer;
    do {
        getline(cin, buffer);
        if (buffer == "1") {
            break;
        }
        else {
            f1 << buffer;
            f1 << "\n";
        }

    } while (true);
    f1.close();
}

void changeColor(string filename)
{
    ifstream f1(filename, ios::in);
    string buffer;
    int counter = 0;
    while (getline(f1, buffer)) {
        counter++;

    }
    f1.close();
    ifstream f2(filename, ios::in);
    string* buf = new string[counter];
    for (size_t i = 0; i < counter; i++)
    {
        getline(f2, buf[i]);
    }
    f2.close();
    cout << "Какой цвет текста хотите?"<<endl;
    cout << "1. Green"<<endl;
    cout << "2. Red" << endl;
    cout << "3. Purple" << endl;
    int choise;
    string color;
    cin >> choise;
    switch (choise) {
    case 1: color = "A";
        break;
    case 2: color = "C";
        break;
    case 3: color = "D";
        break;
    }
    ofstream f3(filename, ios::out);
    f3 << "#include<windows.h>" << "\n";
    for (size_t i = 0; i < counter; i++)
    {
        f3 << buf[i]<<"\n";
        if (buf[i] == "int main()" || buf[i] == "int main(){") {
            f3 << "system(\"Color 0" << color << "\");";
        }
    }
}

int editProgram(string filename) {
   
    while (true) {
        cout << "--------MENU--------" << endl;
        cout << "1. Заменить строку" << endl;
        cout << "2. Добавить код" << endl;
        cout << "0. Выход" << endl;
        cout << "--------------------" << endl;
        int choise;
        cin >> choise;
        switch (choise) {
        case 1: {
            replaceStr(filename);
        }break;
        case 2: {
            addCode(filename);
        }break;
        default: {
            return 0;
        }break;
        }
       
        CLEAR;
    }
    
}

