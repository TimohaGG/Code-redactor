#include"Functions/functions.h"
int main() {
	setlocale(0,"");
    cout << "����� ���������� � �������� ����" << endl;
    cout << "��������� ������ ��� ������!!!(1 - ��� ����������)"<<endl;
    string filename = "test.cpp";
    string filename_exe = "prog.exe";
    fstream file;
    file.open(filename, ios::out);
    if (file.is_open())
    {
        string buffer;
        do {
            getline(cin, buffer);
            if (buffer == "1") {
                break;
            }
            else {
                file << buffer;
                file << "\n";
            }
            
        } while (true);

        file.close();
        CLEAR;
       
       
        int choise;
        while (true) {
            do {
                cout << "--------MENU--------" << endl;
                cout << "1. ��������� ���������" << endl;
                cout << "2. �������� ���" << endl;
                cout << "3. ������������� ���������" << endl;
                cout << "4. �������� ���� �������" << endl;
                cout << "0. �����" << endl;
                cin >> choise;
                CLEAR;
            } while (choise < -1 || choise>4);
            switch (choise) {
            case 1: {launchProgram(filename_exe, filename); }break;
            case 2: {showCode(filename); }break;
            case 3: {editProgram(filename); }break;
            case 4: {changeColor(filename); }break;
            defaulr:exit(0);
            }
            
           
           
            pause;
            CLEAR;
       }
       
    }
   else
    {
           cout << "Error! File not opened!" << endl;
       }
    return 0;
}