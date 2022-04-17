/*
In normal terms Encapsulation is defined as wrapping up of data and information under a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulates them.
*/

//program to explain Encapsulation
#include<bits/c++std.h>
using namespace std;

class Encapsulation {
	private :
	//data hidden from outside world
		int x;
	
	public :
		//function to set value of variable
		void set(int a){
		 x=a;
		}
		//function to return value of variable x
		int get(){
			return x;
		}
};

//main function
int main(){
	Encapsulation obj;
	system("cls");
	obj.set(5);
	cout<<obj.get();
	return 0;
}

//OUTPUT : 5

/*
In the above program the variable x is made private. This variable can be accessed and manipulated only using the functions get() and set() which are present inside the class. Thus we can say that here, the variable x and the functions get() and set() are binded together which is nothing but encapsulation.
*/

/*
Role of access specifiers in encapsulation

1. As we have seen in above example, access specifiers plays an important role in implementing encapsulation in C++. The process of implementing encapsulation can be sub-divided into two steps:

2 .The data members should be labeled as private using the private access specifiers
The member function which manipulates the data members should be labeled as public using the public access specifier
*/

