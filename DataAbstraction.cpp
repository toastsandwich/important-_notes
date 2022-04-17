/*
Abstraction means DISPLAYING ONLY ESSENTIAL INFORMATION AND HIDING THE DETAILS. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.
*/

/*
Abstraction using Classes: We can implement Abstraction in C++ using classes. Class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to outside world and which is not.

Abstraction in Header files: One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h header file. Whenever we need to calculate power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating power of numbers.
*/

/*
Abstraction using access specifiers

Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on class members. For example:

Members declared as public in a class, can be accessed from anywhere in the program.
Members declared as private in a class, can be accessed only from within the class. They are not allowed to be accessed from any part of code outside the class.
*/

/*
Advantages of Data Abstraction:

1.Helps the user to avoid writing the low level code
2.Avoids code duplication and increases reusability.
3.Can change internal implementation of class independently without affecting the user.
4.Helps to increase security of an application or program as only important details are provided   to the user.
*/

#include<bits/stdc++.h>
using namespace std;

class implementAbstraction {
	private :
		int a,b;
	
	public :
		//method to set values of private members
		void set(int x , int y){
			a = x ;
			b = y ;
		}
		
		void display(){
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
};

int main(){
	syatem("cls");
	implementAbstraction obj;
	obj.set(10,67);
	obj.display();
	return 0;
}

