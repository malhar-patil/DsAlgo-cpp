#include<bits/stdc++.h>
using namespace std;

void getMax(vector<int> sums){
    int mx=0;
    int index=0;
    for(int i=0;i<sums.size();i++){
        if(sums[i]>mx){
            mx=sums[i];
            index=i;
        }

    }
    cout<<"Row with largest sum is: "<<index+1<<endl;
}

void getLargestSum(int arr[][4],int r,int c){
    vector<int> sums;
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        sums.push_back(sum);
        sum=0;
    }

    getMax(sums);
}


//function for row wise sum
void getSum(int arr[][4],int r,int c){
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" row is: "<<sum<<endl;
        sum=0;
    }
}



// function for linear search
bool getElement(int arr[][4],int r,int c,int key){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}



int main(){
int arr[3][4];
int r=3;
int c=4;

//input rowise

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}


//input columnwise

// for(int i=0;i<c;i++){
//     for(int j=0;j<r;j++){
//         cin>>arr[j][i];
//     }
// }


//hardcode elements
// int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

// int arr2[3][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3}};

//print 2D Array
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

//Search an element
cout<<"Enter an element to search: ";
int key;
cin>>key;
bool element=getElement(arr,r,c,key);
if(element)
cout<<"Key Present"<<endl;
else
cout<<"Key not found"<<endl;
cout<<endl;


// Row wise sum 
getSum(arr,3,4);
cout<<endl;

// Get row with lasrgest sum
getLargestSum(arr,3,4);
cout<<endl;


return 0;
}