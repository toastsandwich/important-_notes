#include<iostream>
using namespace std;
  //structure is a user defined data types
  //In short it is array of different data types
  
//  syntax:
 struct student{
     int age;
     string name;
     float cgpa;
   };
//let's do something new using typedef: 
//pay attention over here
//  typedef struct student{
//     int age;
//     string name;
//     float cgpa;  
//  }ep;

//union :-
//gives better memory management.only can use one time one variable.
//   union money{
//     int goods;
//     string vehicle;
//     float cash;
//   };



int main(){

    system("cls");
    struct student john;
    //by using typedef and ep we can now write struct student john as ep john;
    //ep john;
//     john.age = 15;
//     john.name = "John Anderson";
//     john.cgpa = 7.66;                          
                                                             //uncomment from line 34 to 30.
//     cout<<"Student Name : "<<john.name<<endl;
//     cout<<"Student Age : "<<john.age<<endl;
//     cout<<"Student CGPA : "<<john.cgpa<<endl;

//     union money money_1;
//       money_1.goods=34;
//       //money_1.vehicle='3V';
//     cout<<money.goods<<endl;       //output will be 34 and once you uncomment the .vehicle you will get a garbage value.
  
     //enum:-can you say it as list from python ?
    enum Meal{BreakFast,Lunch,Dinner};
    cout<<BreakFast<<endl;                // output will be 0
    cout<<Lunch<<endl;                    // output will be 1
    cout<<Dinner<<endl;                   // output will be 2    
    
    return 0;
}
