#include<bits/stdc++.h>
using namespace std;
int main(){
// int a=5;
// cout<<a<<endl;
// cout<<&a<<endl;

// int *p=&a;
// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<sizeof(a)<<endl;
// cout<<sizeof(*p)<<endl;

// int a=10;
// int *p=&a;
// a++;
// cout<<a<<endl;// 10 //11

// (*p)++;
// cout<<a<<endl;//11 //12

//copy a pointer
// int num=7;
// int *p=&num;
// int *q=p;
// cout<<p<<","<<q<<endl;
// cout<<*p<<","<<*q<<endl;

// cout<<endl;

//pointer to pointer
int i=5;
int *p1=&i;
int **p2=&p1;
cout<<i<<endl;
cout<<*p1<<endl;
cout<<**p2<<endl;

cout<<p1<<endl;
cout<<*p2<<endl;
cout<<p2<<endl;
return 0;
}