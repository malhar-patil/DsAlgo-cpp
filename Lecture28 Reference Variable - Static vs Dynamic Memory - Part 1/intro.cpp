#include<bits/stdc++.h>
using namespace std;
int main(){

int* i=new int;
cout<<i<<endl;
cout<<*i<<endl;
int n;
cin>>n;
*i=n;
cout<<*i<<endl;
delete i;
/*
int i=5;
int &j=i;
cout<<i<<endl;
cout<<j<<endl;
++j;
cout<<i<<endl;
*/

return 0;
}