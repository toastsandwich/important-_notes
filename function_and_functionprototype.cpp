#include<iostream>
using namespace std;

//function is important part of top down programming.

// function prototype
int sum(int a,int b);

int main(){
 int a;int b;
 cin>>a>>b;
  cout<<"operation of 
return 0; //this means program has sucessfully compiled.
}

int sum(int a,int b){
    return a + d;
}

//call by value and call by reference
#include<iostream>
using namespace std;

//example used swaping values
//this will not swap ...... we will use swap pointer
void swap(int* x,int* y){
    //call by reference using pointers.
    int temp;
    *x = temp;
    *x =  *y;
    *y = temp;
}
 int main(){
    int a,b;
    cout<<"Enter Value of a : ";
    cin>>a;
    cout<<"Enter Value of b : ";
    cin>>b;
    
    
    cout<<"Original value of a : "<<a<<endl<<"Original value of b : "<<b<<endl;
    swap(&a,&b);
    cout<<"Swapped value of a : "<<a<<endl<<"Original value of b "<<b<<endl;
    return 0; 
 }
