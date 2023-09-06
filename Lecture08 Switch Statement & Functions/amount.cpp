#include<bits/stdc++.h>
using namespace std;
int main(){
int amt;
cin>>amt;
int den=0;
switch(100){
    case 100:
    den=amt/100;
    cout<<"100: "<<den<<endl;
    amt=amt-(den*100);
    case 50:
    den=amt/50;
    cout<<"50: "<<den<<endl;
    amt=amt-(den*50);
    case 20:
    den=amt/20;
    cout<<"20: "<<den<<endl;
    amt=amt-(den*20);
    case 1:
    den=amt/1;
    cout<<"1: "<<den<<endl;
    amt=amt-(den*1);
}
return 0;
}