#include<iostream>
// #include "hero.cpp"
using namespace std;

class hero {
    public:
    hero(){
        cout<<"Contructor called"<<endl;
    }
    int health;
    char name;

    void setHealth(int health){
        this -> health = health; // this is a pointer which points to the object which invokes the method
    }
   

    void print(){
        cout<<name<<endl;  
        cout<<health<<endl;
    }
    void setName(char ch){
        name = ch;
    }
    char getName(){
        return name;
    }

    // parameterized constructor 


    hero(int health, char name){
        cout<<"this -> "<<this<<endl;
        this -> health = health; //first this health points object , second health points the health passed 
    }

    // copy constructor
    hero(hero& temp){
        this->health = temp.health;
        this->name = temp.name;   
    }

};

int main(){

    hero suresh;
    suresh.setHealth(70);
    suresh.setName('S');

    hero ramesh(80,'R');

    suresh.print();
    hero suresh_son(suresh); // copy constructor called
    suresh_son.print();
     





























    //Static allocation 
    // hero a;
    // cout<<"health is "<<a.health<<endl;
    // cout<<"name is:"<<a.getName()<<endl;

    // //dynammically allocation 
    // hero *b = new hero;
    // (*b).health = 70; // dereferencing the pointer to access health
    // (*b).setName('A'); // setting name using the method
    // cout<<"health is "<<(*b).health<<endl;
    // cout<<"name is:"<<(*b).getName()<<endl;

    // hero ram;

    // // ram.name = 'S';  
    // ram.setName('S'); 


    // cout<<"Health is :"<<ram.health<<endl;
    // cout<<"Name"<<ram.getName()<<endl;
    // hero Ram;

    // hero *rahul = new hero(10, 'R');
    // rahul -> print();
    // ////////////////////////////////////////////////
    // hero ramesh(100,'R');
    // ramesh.print();
    // hero *h = new hero; 
    // h -> setName('H');
    // h -> health = 70;  
    // h -> print(); 


   

    // hero temp(22,'B');
    // temp.print();



    return 0; 
}