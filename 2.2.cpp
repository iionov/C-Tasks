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
void write_nils_to_head_file(ofstream F, int N=5){
		int i, n;
double a;
	//ofstream F;
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
for (i=0; i<N; i++)
{
cout<<"a=0x00";
a=0x00;
F<<a<<"\t";
}
	F.close();
system("pause");
}
int main(){
	int N=5;
	ofstream F;
	void write_nils_to_head_file(ofstream F, N);
	return 0;
}


