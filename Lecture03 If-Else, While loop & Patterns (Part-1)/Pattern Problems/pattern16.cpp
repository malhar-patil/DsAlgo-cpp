// 4
// D
// C D
// B C D
// A B C D

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;

while(i<=n){
int j=1;
char value='A'+n-i;
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