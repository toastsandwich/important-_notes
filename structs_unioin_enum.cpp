#include<iostream>
using namespace std;
  //structure is a user defined data types
  //In short it is array of different data types
  
//  syntax:
// struct student{
//     int age;
//     string name;
//     float cgpa;
//   };
//let's do something new using typedef: 
//pay attention over here
  typedef struct student{
     int age;
     string name;
     float cgpa;  
  }ep;
  union money{
    
  };

int main(){

    system("cls");
    //struct student john;
    //by using typedef and ep we can now write struct student john as ep john;
    ep john;
    john.age = 15;
    john.name = "John Anderson";
    john.cgpa = 7.66;

    cout<<"Student Name : "<<john.name<<endl;
    cout<<"Student Age : "<<john.age<<endl;
    cout<<"Student CGPA : "<<john.cgpa<<endl;

    return 0;
}
