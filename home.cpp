#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;  

class Camel{ 

    private:

    float weight;
    int age;  
    string name;  
    char gender; 
    bool is_live;

    public:

    Camel(){
        is_live = false;
    }

    Camel(float w,int a,string n,char g){
        gender = g;
        weight = w;
        age = a; 
        name = n;  
        is_live = true;
    }

    void age_me(){
        if(is_live) 
            age++;
        else
            cout<<"Camel is dead \n";
    }

    void print(){
        if(is_live){
            cout<<"====== "<<"Camel: "<< name <<" ==========\n";
            cout<<"Gender: "<<gender<<endl;  
            cout<<"Weight: "<<weight<<endl;  
            cout<<"Age: "<<age<<endl;  
            cout<<"Name: "<<name<<endl;  
            cout<<"IsAlive: "<<is_live<<endl;
            cout<<"============================\n";
        }
        else{
            cout<<"The camel is dead.."<<endl;
            cout<<"============================\n";
        }
    }

    void eat(){
        if(is_live){
            srand(time(0));
            float x=1+rand()%(50);
            x=x/10;
            weight+=weight*x/100;
        }
        else
            cout<<"camel dead"<<endl;
    }

    ~Camel(){
    }
};
int main(){
  
    Camel c1(95,6,"bila",'M');
    c1.print();
    c1.age_me();
    c1.eat();  
    c1.print();

    Camel c2;
    c2.age_me();
    c2.eat();
    c2.print();

    Camel c3(312,17,"Eve",'F');
    c3.print();
    c3.age_me();
    c3.eat();  
    c3.print();

    Camel c4(496,48,"Mer",'M');
    c4.print();
    c4.age_me();
    c4.eat();  
    c4.print();
 
    system("PAUSE");
    return 0;
}