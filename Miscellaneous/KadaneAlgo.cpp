//Maximum Sum Problem
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={2,4,6,-1,5};
int currsum=0;
int maxsum=0;
for(int i=0;i<5;i++){
    currsum+=arr[i];
    if(currsum>maxsum){
        maxsum=currsum;
    }
    if(currsum<0){
        currsum=0;
    }

}
cout<<maxsum<<endl;
cout<<endl;
return 0;
}
