#include<iostream>
using namespace std;
int main(){
//   An array in C/C++ or be it in any programming language is a collection of similar data items
//   stored at contiguous memory locations and elements can be accessed randomly using indices
//   of an array.  They can be used to store collection of primitive data types such as int, float,
//   double, char, etc of any particular type. To add to it, an array in C/C++ can store derived data
//   types such as the structures, pointers etc. Given below is the picture representation of an
//   array.

  // pointers X arrays
  int arr[5];
  for(int i = 0 ; i < 10 ; i++){
    cout<<"The memory allocated for a["<<i<<"] is : "<<&arr[i]<<endl;
  }
  //declaring arrays of string using pointers.
   
  // Initialize array of pointer
    const char *colour[4] = { "Blue", "Red",
                             "Orange", "Yellow" };
 
    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        cout << colour[i] << "\n";
  //vectors are used to dynamically allocate an array that can be varying size.
  
}
