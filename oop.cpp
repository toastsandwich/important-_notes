//  Animals    -->   Cat,Dog
//  (class)           (obj)
 
//  main focus on functions not on flow of data

//Object-oriented programming (OOP) is nothing but that which allows the writing of programs with the help of certain classes and real-time objects. We can say that     //this approach is very close to the real-world and its applications because the state and behaviour of these classes and objects are almost the same as real-world       //objects.

 /*What Are Class & Object? 
It is the basic concept of OOP; an extended concept of the structure used in C. It is an abstract and user-defined data type. It consists of several variables and       functions. The primary purpose of the class is to store data and information.*/
//IMPORTANT The class is not visible to the world, but the object is.
//An basic example for OOPs
#include<iostream>
using namespace std;

class cars;
    public :
        int distance_travelled;
        string engine_number,model_number,chassis_number,model_name,description,damage,color[4],fuelpump_number;
        void display(){
            
        };
int main (){
    car car1;
	cout<<"MODEL NAME : ";
    cin>>car1.model_name;
    cout<<"MODEL NUMBER : ";
    cin>>car1.model_number;
    cout<<"ENGINE NUMBER";
    cin>>car1.engine_number;
    cout<<"CHASSIS NUMBER : ";
    cin>>car1.chassis_number;
    cout<<"FUELPUMP NUMBER";
    cin>>car1.fuelpump_number;
    for(int i = 0 ; i < 4 ; i++){
        cout<<"COLOR "<<i+1<<" : ";
        cin<<car1.color[i];
    }
    cout<<"DESCRIPTION : ";
    cin>>car1.description;
    cout<<"DAMAGE : ";
    cin>>car1.damage;
    cout<<"DISTANCE TRAVELLED :";
    cin>>car1.distance_travelled;
    
    
    
    
}

	
	

