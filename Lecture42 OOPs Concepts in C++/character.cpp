#include<bits/stdc++.h>
using namespace std;
class character{

    public:
    int health;
    char level;

    //default constructor
    character(){
        cout<<"** Default Constructor"<<endl;
    }

    //parameterized constructor
    character(int health,char level){
        cout<<"**Parameterized Constructor"<<endl;
        this->health=health;
        this->level=level;
    }

    //copy constructor
    character(character &temp){

        cout<<"**Copy Constructor"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    //Destructor
    ~character(){
        cout<<"**Destructor Called"<<endl;
    }



    
    void setHealth(int health){
        this->health=health;
    }

    int getHealth(){
        return health;
    }

    void print(){
        cout<<"Health: "<<health<<endl;
        cout<<"Level: "<<level<<endl;
    }

};
int main(){

    //creating object statically;
    character trevor;
    trevor.setHealth(40); //OR //trevor.health=40;
    trevor.level='A';
    cout<<"Trevor's health: "<<trevor.getHealth()<<endl;
    cout<<"Trevor's level: "<<trevor.level<<endl;
    cout<<"Size of character class: "<<sizeof(character)<<endl;

    //creating object dynamically;
    character*franklin=new character;
    franklin->setHealth(50);
    franklin->level='B';
    cout<<"Franklin's health: "<<franklin->getHealth()<<endl;
    cout<<"Franklin's level: "<<franklin->level<<endl;

    //Accessing Parameterized Constructor
    character michael(80,'A');
    cout<<"Michael's health: "<<michael.getHealth()<<endl;
    cout<<"Michael's level: "<<michael.level<<endl;

    //Accessing Copy Constructor
    character lester(trevor);
    cout<<"Lester's health: "<<lester.getHealth()<<endl;
    cout<<"Lester's level: "<<lester.level<<endl;

/*
    //Deep and shallow copy
    trevor.health=50;
    trevor.print();
    lester.print();

    //Assignment operator
    trevor= michael;
    trevor.print();
*/  
    
    //Destructor
    delete franklin;
    franklin->print();

    

    cout<<endl;
    return 0;
}