#include<bits/stdc++.h>
using namespace std;
void print(int n){
    int i=1;
    while(n>0){
        cout<<i<<" ";
        n--;
        i++;
    }
}
int main(){
int n;
cin>>n;
print(n);
cout<<endl;
return 0;
}