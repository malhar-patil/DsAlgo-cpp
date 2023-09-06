#include<bits/stdc++.h>
using namespace std;
void rowSum(int arr[][4],int row,int col){
    int count=1;
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of row "<<count<<" is "<<sum<<endl;
        count++;
        sum=0;
    }
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