#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iomanip> 
#include <locale.h>
#include <math.h>
#include <Windows.h>
#include <fstream> 
using namespace std;
int main(){
	int i, n;
double a;
	ofstream F;
	F.open("C:\\Users\\Adm\\Desktop\\1.txt", ios::out);
	if (!(F.is_open())){
            cout << "File not find\n";
            cout << "exit";
            ofstream ofs("C:\\Users\\Adm\\Desktop\\1.txt"); 
ofs.close();
        } else {
            cout << "Process began\n";
            cout << "Process finished\n";
        }
	cout<<"n="; cin>>n;
for (i=0; i<n; i++)
{
cout<<"a=0x00\n";
a=0x00;
}
	F.close();
system("pause");
return 0;
}
