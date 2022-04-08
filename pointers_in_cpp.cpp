//pointers are data types which holds the address of other data types.
#include<iostream>
using namespace std;

int main(){ 
  int a = 3;         // a is a int type variable
  int *b = &a;       // * is dereferencing operator and & is addressing operator
  //int *c;
  
  system("cls");
  cout<<"Variable is stored at address :"<<b<<endl;     // shows address of int a
  cout<<"Value stored at address "<<b<<" is "<<*b<<endl;// shows variable value at address stored
  //cout<<*c<<endl;    // intrestingly result is 1 idk why but 
  
 //arethmatics in pointers
 int **c = &b; // pointer to pointer----> save address of pointer variable
 cout<<"The address of b is "<<c<<endl; // shows address of b
 cout<<"The value at adress is : value_at(value_at(c)) that is "<<**c<<endl;
 
 int d;
   
  
 return 0;
 }
 
 
