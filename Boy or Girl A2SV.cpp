MaSter Solution, [5/21/2024 5:
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void determinTheSex(char* s, int len){
   int counter = 0;
   for(int i=0; i< len; i++){
       for(int j=0; j< len; j++){
           if(s[i] == s[j] && i != j){
               counter--;
               s[j] = '\0';
           }
       }
       counter++;
   }

   if(counter % 2 == 0){
       cout<<"CHAT WITH HER!"<<endl;
   }
   else{
       cout<<"IGNORE HIM!"<<endl;
   }
}
int main() {
    string input;
    getline(cin,input);

    int length = input.length();
    char* charArray = new char [length + 1];
    strcpy(charArray, input.c_str());
    
    determinTheSex( charArray, length);
    delete[] charArray;
    return 0;
}
