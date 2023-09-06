#include<bits/stdc++.h>
using namespace std;
int main(){
int i=5;
int *p1=&i;
int **p2=&p1;

cout<<"**p2: "<<**p2<<endl;
cout<<"*p1: "<<*p1<<endl;
cout<<"i: "<<i<<endl;
cout<<endl;

cout<<"p1: "<<p1<<endl;
cout<<"*p2: "<<*p2<<endl;
cout<<"&i: "<<&i<<endl;
cout<<endl;

cout<<"&p1: "<<&p1<<endl;
cout<<"p2: "<<p2<<endl;
cout<<endl; 

cout<<"&p2: "<<&p2<<endl;

cout<<endl;
return 0;
}