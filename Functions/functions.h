#pragma once
#include<iostream>
#include<string>
#include<fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;//in - read   out - write
using std::ifstream;//read from file
using std::ofstream;//write in file
using std::fstream;



#define clear system("cls")
#define pause system("pause")

void launchProgram(string filename_exe, string filename);
void editProgram(string filename_exe, string filename);