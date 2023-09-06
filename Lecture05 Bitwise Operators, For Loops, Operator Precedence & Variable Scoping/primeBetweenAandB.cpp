#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;

for(int i=a;i<=b;i++){
    int temp=i;
    int x=2;
    bool check = true;
    while(x<temp){
        
        if(temp%x==0){
            check = false;
        }
        x++;
    }
    if(check){
        cout<<temp<<" ";
    }
}
cout<<endl;
return 0;
}