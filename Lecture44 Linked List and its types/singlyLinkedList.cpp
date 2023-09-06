// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;

//     node(){

//     }

//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

//     ~node(){
//         cout<<"Destructor called"<<endl;
//     }
// };

// void insertAtHead(node* &head,node*tail,int data){
//     if(head==NULL){
//         node*temp=new node(data);
//         head=temp;
//         tail=temp;
//     }
//     node*temp=new node(data);
//     temp->next=head;
//     head=temp;
// }
// void insertAtTail(node* &head,node* &tail,int data){
//     if(tail==NULL){
//         node*temp=new node(data);
//         head=temp;
//         tail=temp;
//     }
//     else{
//         node*temp=new node(data);
//         tail->next=temp;
//         tail=temp;
//     }
// }
// int getLength(node* &head){
//     node*temp=head;
//     int cnt=0;
//     while(temp!=NULL){
//         temp=temp->next;
//         cnt++;
//     }

//     return cnt;
// }
// void insertAtPos(node* &head,node* &tail, int pos,int data){
//     if(pos==1){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     else{
//     node*temp=new node(data);
//     node*curr=head;
//     int cnt=1;
//     while(cnt<pos-1){
//         curr=curr->next;
//         cnt++;
//     }

//     temp->next=curr->next;
//     curr->next=temp;

//     if(temp->next==NULL){
//         tail=temp;
//     }
//     }
// }

// void deletion(node*& head, node* &tail,int pos){
//     if(pos==1){
//         node*temp=head;
//         head=temp->next;
//         delete temp;
//     }
//     else{
//         node*temp=head;
//         node*curr=NULL;
//         int cnt=1;
//         while(cnt<pos){
//             curr=temp;
//             temp=temp->next;
//             cnt++;
//         }
//         curr->next=temp->next;
//         temp->next=NULL;
//         delete temp;

//         if(curr->next==NULL){
//             tail=curr;
//         }
//     }
// }

// void print(node* &head){
//     node*temp=head;
//     while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }
// }
// int main(){
// node*n=new node(20);
// node*head=n;
// node*tail=n;
// insertAtTail(head,tail,30);
// insertAtTail(head,tail,40);
// insertAtTail(head,tail,50);
// insertAtPos(head,tail,1,10);
// deletion(head,tail,5);
// print(head);
// cout<<endl;
// cout<<"Length: "<<getLength(head)<<endl;
// cout<<"Head: "<<head->data<<" "<<"Tail: "<<tail->data<<endl;
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
class node{

    //properties
    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

};
void insertAtHead(node*&head,int data){
    node*temp=new node(data);
    temp->next=head;
    head=temp;
}

void insertAtTail(node* &tail,int data){
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;

}

void insertAtPos(node* &head,node*&tail,int pos,int data){
    if(pos==1){
        node*temp=new node(data);
        temp->next=head;
        head=temp;
    }
    else{
        node*prevNode=head;
        int cnt=1;
        while(cnt<pos-1){
            prevNode=prevNode->next;
            cnt++;
        }
        node*temp=new node(data);
        temp->next=prevNode->next;
        prevNode->next=temp;

        if(temp->next==NULL){
            tail=temp;
        }
    }

}

void deleteNode(node*&head,node*&tail,int pos){
    node* prevNode=NULL;
    node* currentNode=head;

    if(pos==1){
        head=currentNode->next;
        delete currentNode;
        return;
    }
    else{
    int cnt=1;
    while(cnt<pos){
        prevNode=currentNode;
        currentNode=currentNode->next;
        cnt++;
    }

    if((currentNode->next)==NULL){
        prevNode->next=NULL;
        tail=prevNode;
        delete currentNode;
        return;
    }

    prevNode->next=currentNode->next;
    currentNode->next=NULL;
    delete currentNode;
    }

}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    node*n=new node(10);
    /*
    cout<<n->data<<endl;
    cout<<n->next<<endl;
    */

   node*head=n;
   /*
   print(head);
   insertAtHead(head,12);
   print(head);
   insertAtHead(head,15);
   print(head);
   cout<<endl;
   */

   node*tail=n;
   print(head);
   insertAtTail(tail,12);
   print(head);
   insertAtTail(tail,15);
   print(head);
   insertAtPos(head,tail,3,13);
   print(head);
   insertAtPos(head,tail,5,14);
   print(head);
   cout<<endl;

   deleteNode(head,tail,3);
   print(head);

   cout<<"Head: "<<head->data<<endl;
   cout<<"Tail: "<<tail->data<<endl;
   


return 0;
}