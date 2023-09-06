#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int spaces=n-i;
    while(spaces>0){
        cout<<" "<<" ";
        spaces--;
    }
    int nums=i+(i-1);
    int count=1;
    while(nums>0){
        if(count<i&&nums>=i){
            cout<<count<<" ";
            count++;
        }
        else if(count==i){
            cout<<i<<" ";
            count--;
        }
        else{
            
            cout<<count<<" ";
            count--;
        }
        nums--;
    }

    int spaces_2=n-i;
    while(spaces_2>0){
        cout<<" "<<" ";
        spaces_2--;
    }
    cout<<endl;
    i++;

}
cout<<endl;
return 0;
}

//OR
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int spaces=n-i;
    int count=1;
    int j=1;
    while(spaces>0){
        cout<<"."<<" ";
        spaces--;
        j++;
    }
    while(j<=n){
        cout<<count<<" ";
        j++;
        count++;
    }
    count=count-2;
    while(count!=0){
        cout<<count<<" ";
        count--;
    }
    int spaces2=n-i;
    while(spaces2>0){
        cout<<"."<<" ";
        spaces2--;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}
*/