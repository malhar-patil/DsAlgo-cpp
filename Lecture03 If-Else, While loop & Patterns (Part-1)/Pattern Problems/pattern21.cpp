// 4
//       1 
//     2 2 
//   3 3 3 
// 4 4 4 4 

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int spaces=n-i;
    int nums=i;
    while(spaces>0){
        cout<<" "<<" ";
        spaces--;
    }
    while(nums>0){
        cout<<i<<" ";
        nums--;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}