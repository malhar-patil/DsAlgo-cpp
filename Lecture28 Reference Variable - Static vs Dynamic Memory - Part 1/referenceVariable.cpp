#include<bits/stdc++.h>
using namespace std;
int main(){
int i=5;
int &j=i;
cout<<i<<endl;
cout<<j<<endl;
j++;
cout<<i<<endl;
cout<<j<<endl;
cout<<endl;
return 0;
}