// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
 setlocale(LC_ALL, "RUS");
 ifstream f1("1.txt");
 ofstream f3("3.txt", ios_base::trunc);
 string s;
 string s1;
 f3 << "1.txt" << "\n";
 int k=0;
 int i=1;
 while (!f1.eof())
 {
 getline(f1,s);
 ifstream f2("2.txt");
 while (!f2.eof())
 {
	 getline(f2,s1);
	 if (s==s1) k=1;
 }
 f2.close();
 
 
 if (k==0)
 {
	f3 << i << ' ';
	 f3 << s << "\n";
 }
 k=0;
 i++;
 }
 f1.close();
 


 k=0;
 i=1;
  ifstream f2("2.txt");
f3 << "2.txt" << "\n";
 while (!f2.eof())
 {
 getline(f2,s1);
 ifstream f1("1.txt");
 while (!f1.eof())
 {
	 getline(f1,s);
	 if (s==s1) k=1;
 }
 f1.close();
 
 
 if (k==0) 
 {
	f3 << i << ' ';
	 f3 << s1 << "\n";
 }
 k=0;
 i++;
 }

 f2.close();

 f3.close();




 system("pause");
	return 0;
}

