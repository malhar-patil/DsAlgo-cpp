// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void insertNode(node* &tail,int element,int data){
//     node*curr=tail;
//     if(curr==NULL){
//         node*temp=new node(data);
//         tail=temp;
//         tail->next=tail;
//     }
//     while(curr->data!=element){
//         curr=curr->next;
//     }

//     node*temp=new node(data);
//     temp->next=curr->next;
//     curr->next=temp;

// }
// void print(node* tail) {
//     node* temp = tail;
//     if(tail == NULL) {
//         cout << "List is Empty "<< endl;
//         return ;
//     }
//     do {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     } while(temp != tail); // change condition to while(temp != tail)
//     cout << endl;
// }
 
// int main(){
// node*n=new node(10);
// node*tail=NULL;
// insertNode(tail,5,20);
// insertNode(tail,20,30);
// insertNode(tail,30,40);
// print(tail);
// cout<<"HI"<<endl;
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertNode(node*&tail,int ele,int data){
    if(tail==NULL){
        node*temp=new node(data);
        tail=temp;
        tail->next=tail;
        return;
    }
    node*current=tail;
    while(current->data!=ele){
        current=current->next;
    }
    node*temp=new node(data);
    temp->next=current->next;
    current->next=temp;
}

void deletion(node*&tail,int ele){
    node*prevNode=NULL;
    node*current=tail;
    do{
        prevNode=current;
        current=current->next;
    }
    while(current->data!=ele);
    if(current==tail){
        tail=current->next;
    }
    prevNode->next=current->next;
    current->next=NULL;

    delete current;

}
void print(node*tail){
    node*temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}
int main(){
node*n=new node(10);
node*tail=NULL;
insertNode(tail,10,12);
print(tail);
insertNode(tail,12,15);
print(tail);
insertNode(tail,12,13);
print(tail);
insertNode(tail,15,17);
print(tail);
deletion(tail,12);
print(tail);

cout<<"Tail: "<<tail->data<<endl;


return 0;
}