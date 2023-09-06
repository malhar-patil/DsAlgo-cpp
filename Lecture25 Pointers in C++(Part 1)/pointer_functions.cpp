#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    cout<<++(*p)<<endl;
}
int main(){

int a=5;
int *p=&a;

print(p);
update(p);

cout<<a<<endl;
cout<<endl;
return 0;
}