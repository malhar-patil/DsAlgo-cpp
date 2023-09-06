#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int squareRoot(int n){
    int s=0;
    int e=n-1;
    int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        int temp=pow(mid,2);
        if(temp==n){
            return mid;
        }
        else if(temp<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
int n;
cin>>n;
int ans=squareRoot(n);
int count=5;
int j=-1;
float finalans=ans;
while(count>0){
    float x=pow(10,j);
    float temp=finalans+(x*9);
    for(float i=finalans;i<temp;i+=x){
        if(i*i<=n){
            finalans=i;
        }
       
    }
    j=j-1;
    count--;
}
 cout<<"finalans: "<<finalans<<endl;
return 0;
}


//SOLUTION USING RECURSION
/*
#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n,int s,int e,int& ans){
    cout<<s<<" "<<e<<endl;
    int mid=s+(e-s)/2;
    cout<<"Mid "<<mid<<endl;

    if(s>e){
        ans=mid-1;
        return ans;
    }

    int temp=abs(pow(mid,2));
    if(temp>n){
        return squareRoot(n,s,mid-1,ans);
    }
    else{
        return squareRoot(n,mid+1,e,ans);
    }
}
int main(){
int n;
cin>>n;
int ans=0;
squareRoot(n,0,n-1,ans);
cout<<ans<<endl;

int count=5;
int j=-1;
float finalans=ans;
while(count>0){
    float x=pow(10,j);
    float temp=finalans+(x*9);
    for(float i=finalans;i<temp;i+=x){
        if(i*i<=n){
            finalans=i;
        }
       
    }
    j=j-1;
    count--;
}
 cout<<"finalans: "<<finalans<<endl;
return 0;
}
*/