#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }

    //recursive function 
    return power(a,b-1)*a;
}
int main(){
int a,b;
cin>>a>>b;
cout<<power(a,b)<<endl;
cout<<endl;
return 0;
}