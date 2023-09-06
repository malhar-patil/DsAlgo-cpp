#include<bits/stdc++.h>
using namespace std;
void reach(int a,int b){
    cout<<"Curr: "<<a<<endl;
    cout<<"Home: "<<b<<endl;
    //base case
    if(a==b){
        cout<<"Reached!!"<<endl;
        return;
    }
    
    a++;
    reach(a,b);

}
int main(){
int a,b;
cin>>a>>b;
reach(a,b);
cout<<endl;
return 0;
}