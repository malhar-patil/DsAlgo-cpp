// 4
//       1
//     2 3
//   4 5 6
// 7 8 9 10


#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
int count=1;
while(i<=n){
    int spaces=n-i;
    int nums=i;

    while(spaces>0){
        cout<<" "<<" ";
        spaces--;
    }
    while(nums>0){
        cout<<count<<" ";
        count++;
        nums--;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}