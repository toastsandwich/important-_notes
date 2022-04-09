#include<iostream>
using namespace std;
int main(){
  
  int marks[4]={20,19,12,5}
  cout<<marks[0]<<endl;
  cout<<marks[1]<<endl;
  cout<<marks[2]<<endl;
  cout<<marks[3]<<endl;
  
  //important point to note that an array always stores garbage value before we assign it a value.
  
  /*run this to check it yourselves
  int array[10];
  for (int i = 0; i<10 ; i++){
    cout<<array[i]<<endl;
  }
  */

//   now the main part "POINTERS AND ARRAYS" :-                             
//   int p = marks;         |  //pointer arethmatic:                                 |
//   cout<<*p++<<endl;      |  // address_new = address_current+(i*size_of_datatype) |
  int *p = marks;
  cout<<*(p++);              // do check this out it is important 
  cout<<*(++p);
  cout<<*p;
  
//   cout<<"The value of marks[0]is "<<*p;
//   cout<<"The value of marks[1]is "<<*(p+1);
//   cout<<"The value of marks[2]is "<<*(p+2);
//   cout<<"The value of marks[3]is "<<*(p+3);

  return 0;
}
