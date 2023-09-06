#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;
class Hero{
    //propertieS
    public:
    int health;
    char level;

    //    Simple Constructor 
    // Hero(){
        // cout<<"This is a contructor"<<endl;
    // }

    //Parameterized constructor
    Hero(int health,int level='A'){
        this->health=health;
        this->level=level;
        // cout<<this<<endl;
    }

    //copy constructor
    Hero(Hero Temp){
        this-> health=temp.health;
    }
    void print(){
    cout<<level<<endl;
    cout<<health<<endl;
    }

    // SETTER AND GETTER
    // int getHealth(){
    //     return health;
    // }
    // void setHealth(int h){
    //     health=h;
    // }

};
int main(){
Hero witcher(50,'A');
Hero ciri(witcher);

witcher.print();
ciri.print();
return 0;
}