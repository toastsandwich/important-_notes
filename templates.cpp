// template is a simple and yet very powerful tool in C++. 

/*How do templates work? 
Ans : emplates are expanded at compiler time. This is like macros. The difference is, the compiler does type checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of same function/class.
*/

//example : 
#include<bits/stdc++.h>
using namespace std;

template <typename T>
T myMax(T x, T y){
    return (x>y)?x:y;
}
int main(){
    system("cls");
    cout<<"greatest "<<myMax<int>(3,7)<<endl;
    cout<<"greatest "<<myMax<char>('g','e')<<endl;
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
//Function Templates We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray(). 

//example : 
#include<bits/stdc++.h>
using namespace std;

template <typename sample>
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
sample myMax(sample x, sample y){
	return (x>y)?x:y;
}
int main(){
	system("cls");
	cout << myMax<int>(3, 7) << endl; // Call myMax for int
    cout << myMax<double>(3.0, 7.0)
         << endl; // call myMax for double
    cout << myMax<char>('g', 'e')
         << endl; // call myMax for char
	return 0;
}

//making template for bubble sort algorithm
#include<bits/stdc++.h>
using namespace std;

template <typename bubblesort>
bubblesort 
