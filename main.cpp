#include"Functions/functions.h"
int main() {
	setlocale(0,"");
    cout << "����� ���������� � �������� ����" << endl;
    cout << "��������� ������ ��� ������!!!"<<endl;
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
        clear;
       
        void(*menu[3])(string,string) {launchProgram, editProgram};
        int choise;
       
        do  {
            cout << "--------MENU--------" << endl;
            cout << "1. ��������� ���������" << endl;
            cout << "2. ������������� ���������" << endl;
            cout << "3. �������� ���� �������" << endl;
            cin >> choise;
            clear;
        } while (choise < 0 || choise>3);

        menu[choise - 1](filename_exe, filename);
        pause;
        clear;
    }
   else
    {
           cout << "Error! File not opened!" << endl;
       }
    return 0;
}