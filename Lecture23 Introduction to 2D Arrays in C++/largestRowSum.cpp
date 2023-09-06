#include<bits/stdc++.h>
using namespace std;
void rowSum(int arr[][4],int row,int col){
    int count=1;
    int sum=0;
    int r=-1;
    int mx=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>mx){
            mx=sum;
            r=i+1;
        }
        sum=0;
    }
    cout<<"Largest row sum is: "<<mx<<". Its row number is "<<r<<endl;
}
int main(){
//crete 2-D Array
int arr[3][4];
// int arr[4][3]={{1,11,111},{2,22,222},{3,33,333},{4,44,444}};

//Input Array Elements
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

//Print 2-D array
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

rowSum(arr,3,4);
cout<<endl;
return 0;
}