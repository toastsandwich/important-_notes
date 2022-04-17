#include<bits/c++.h>
using namespace std;

/*A class declaration can contain static object of self type, it can also have pointer to self type, but it cannot have a non-static object of self type.*/

// A class can have a static member of self type
#include<iostream>
  
using namespace std;
  
class Test {
  static Test self;  // works fine
  
  /* other stuff in class*/ 
  
};
  
int main()
{
  Test t;
  getchar();
  return 0;
}

// A class can have a pointer to self type
#include<iostream>
  
using namespace std;
  
class Test {
  Test * self; //works fine
  
  /* other stuff in class*/ 
  
};
  
int main()
{
  Test t;
  getchar();
  return 0;
}

// A class cannot have non-static object(s) of self type.
#include<iostream>
  
using namespace std;
  
class Test {
  Test self; // Error
  
  /* other stuff in class*/ 
  
};
  
int main()
{
  Test t;
  getchar();
  return 0;
}

