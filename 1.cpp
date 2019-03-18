#include <iostream> 
#include <stdio.h> 
#include <string> 
#include <vector> 

using namespace std; 
using std::vector; 

int main() { 
setlocale(LC_ALL, "Russian"); 
vector <int> v = {3,2,2,4,7,3,2,76,22,6,4,6,2,677,5,2222,2,2,4}; 

int d; 
std::cout<<"Какую цифру надо удлаить?" << endl; 
cin >>d; 

for (int i = 0; i < v.size(); ++i){ 
if (v[i] == d){ 
v.erase(v.begin()+i); 
i--; 
} 
} 
for (int i = 0; i < v.size(); ++i){ 
cou<<v[i<<" "; 
} 
return 0; 
}

#include <iostream> 
#include <stdio.h> 
#include <string> 

using namespace std; 

int main() { 
string s; 
cin<< s; 
for (int i = 1; i < s.length(); i++){ 
if (s[i] == s[i-1]){ 
s.erase(s.begin()+i); 
} 
} 
cout<< s<< endl; 
return 0; 
}
