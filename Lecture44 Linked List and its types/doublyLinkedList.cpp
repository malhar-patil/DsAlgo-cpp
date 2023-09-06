// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*prev;
//     node*next;

//     node(){

//     }
//     node(int data){
//         this->data=data;
//         this->prev=NULL;
//         this->next=NULL;
//     }

//     ~node(){
//         cout<<"Destructor called"<<endl;
//     }
// };
// //traversing LL
// void print(node* &head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }

// }
// //Length of LL
// int getLength(node* &head){
//     int len=0;
//     node*temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         len++;
//     }

//     return len;
// }
// void insertAtHead(node* &head,node* &tail,int data){
//     if(head==NULL){
//         node*temp=new node(data);
//         head=temp;
//         tail=temp;
//     }
//     else{
//         node*temp=new node(data);
//         temp->next=head;
//         head->prev=temp;
//         head=temp;
//     }
// }

// void insertAtTail(node* &head,node* &tail,int data){
//     if(head==NULL){
//         node*temp=new node(data);
//         head=temp;
//         tail=temp;
//     }
//     else{
//         node*temp=new node(data);
//         temp->prev=tail;
//         tail->next=temp;
//         tail=temp;
//     }

// }

// void insertAtPos(node* &head,node* &tail,int pos,int data,int len){
//     node*temp=new node(data);
//     node*t=head;
//     if(pos==1){
//         insertAtHead(head,tail,data);
//         /*
//         temp->next=t;
//         t->prev=temp;
//         head=temp;
//         */
//        return;
//     }

//     int cnt=1;
//     while(cnt<pos-1){
//         t=t->next;
//         cnt++;
//     }

//     if(t->next==NULL){
//     temp->next=NULL;
//     insertAtTail(head,tail,data);
//     return;
//     }

//     temp->next=t->next;
//     t->next->prev=temp;
//     temp->prev=t;
//     t->next=temp;
// }
// void deletion(node*&head,node *&tail,int pos){

    
//     if(pos==1){
//         node*temp=head;
//         temp->next->prev=NULL;
//         head=temp->next;
//         delete temp;
//     }
//     node*t1=head;
//     node*t2=new node;
//     int cnt=1;
//     while(cnt<pos){
//         t2=t1;
//         t1=t1->next;
//         cnt++;
//     }

//     if(t1->next==NULL){
//         t2->next=NULL;
//         t1->next=NULL;
//         t1->prev=NULL;
//         tail=t2;
//         delete t1;
        
//     }
//     else{
//     t2->next=t1->next;
//     t1->next->prev=t2;
//     t1->next=NULL;
//     delete t1;
//     }
// }
 
// int main(){

// node*n=new node(10);
// node*head=n;
// node*tail=n;

// insertAtTail(head,tail,20);
// insertAtTail(head,tail,30);
// insertAtTail(head,tail,40);
// insertAtPos(head,tail,5,50,getLength(head));
// insertAtPos(head,tail,6,60,getLength(head));
// deletion(head,tail,6);
// print(head);
// cout<<"Length: "<<getLength(head)<<endl;
// cout<<"Head: "<<head->data<<" "<<"Tail: "<<tail->data<<endl;

// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    
    int data;
    node*prev;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAtHead(node*&head,int data){
    node*temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(node*&tail,int data){
    node*temp=new node(data);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}

void insertAtPos(node*&head,node*&tail,int pos,int data){

    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    else{
    node*prevNode=head;
    int cnt=1;
    while(cnt<pos-1){
        prevNode=prevNode->next;
        cnt++;
    }

    if(prevNode->next==NULL){
        node*temp=new node(data);
        temp->prev=prevNode;
        prevNode->next=temp;
        temp->next=NULL;
        tail=temp;
        return;
    }

    node*temp=new node(data);
    temp->next=prevNode->next;
    prevNode->next->prev=temp;
    temp->prev=prevNode;
    prevNode->next=temp;
    }

}

void deleteNode(node*&head,node*&tail,int pos){

    node*prevNode=NULL;
    node*current=head;

    if(pos==1){
        current->next->prev=NULL;
        head=current->next;
        current->next=NULL;
        current->prev=NULL;
        delete current;
        return;
    }

    int cnt=1;
    while(cnt<pos){
        prevNode=current;
        current=current->next;
        cnt++;
    }

    if(current->next==NULL){
        prevNode->next=NULL;
        tail=prevNode;
        current->next=NULL;
        current->prev=NULL;
        delete current;
        return;
    }
    prevNode->next=current->next;
    current->next->prev=prevNode;
    current->next=NULL;
    current->prev=NULL;
    delete current;
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    node*n=new node(10);
    // cout<<n->data<<endl;
    // cout<<n->prev<<endl;
    // cout<<n->next<<endl;

    node*head=n;
    // print(head);
    // insertAtHead(head,12);
    // print(head);
    // insertAtHead(head,14);
    // print(head);
    // insertAtHead(head,16);
    // print(head);

    node*tail=n;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,14);
    print(head);
    insertAtTail(tail,16);
    print(head);
    insertAtPos(head,tail,3,13);
    print(head);
    deleteNode(head,tail,5);
    print(head);

    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 


return 0;
}