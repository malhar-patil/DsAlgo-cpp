// 4
// A 
// B C 
// D E F 
// G H I J 

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
char value='A';
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<value<<" ";
        j++;
        value++;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}