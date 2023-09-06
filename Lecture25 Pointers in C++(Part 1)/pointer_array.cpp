#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int *p=&arr[0];
cout<<"address of arr: "<<arr<<endl;
cout<<"address of arr: "<<&arr<<endl;
cout<<"address of arr: "<<&arr[0]<<endl;
cout<<endl;

cout<<"1. "<<*arr+1<<endl;//2
cout<<"2. "<<*(arr+3)<<endl;//4
cout<<"3. "<<*(arr)+1<<endl;//2
cout<<endl;

//arr[i]
int i=2;
cout<<arr[i]<<endl;
cout<<*(arr+i)<<endl;
cout<<i[arr]<<endl;// V. Imp
cout<<endl;

cout<<"Size of array: "<<sizeof(arr)<<endl;
cout<<"Size of pointer: "<<sizeof(p)<<endl;
cout<<"Size of pointer(&p): "<<sizeof(&p)<<endl;
cout<<"Size of *p: "<<sizeof(*p)<<endl;
cout<<endl;

int ar[4]={1,2,3,4};
//ERROR
//a+=1;
int *ptr=&ar[0];
ptr=ptr+1;
cout<<*ptr<<endl;
cout<<endl;
return 0;
}