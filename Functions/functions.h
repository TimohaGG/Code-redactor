#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<stdio.h>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;//in - read   out - write
using std::ifstream;//read from file
using std::ofstream;//write in file
using std::fstream;



#define CLEAR system("cls")
#define pause system("pause")

void launchProgram(string filename_exe, string filename);
int editProgram(string filename);
void showCode(string filename);
void addCode(string filename);