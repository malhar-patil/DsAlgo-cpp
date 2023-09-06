#include<bits/stdc++.h>
using namespace std;
int main(){
char c[5]={'a','b','c','d'};//accecpted
cout<<c<<endl;
//char ch[5]="abcde" //Incorrect
//Not correct as there is a null character at the end and creating a char arr of size 5 violates its working

char ch[5]="abcd";
cout<<ch<<endl;
char*chp=&ch[0];
cout<<chp<<endl;
cout<<*chp<<endl;

char temp='a';
char*tp=&temp;
cout<<tp<<endl; 

cout<<endl;
return 0;
}