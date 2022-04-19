
//Pair is used to combine together two values that may be different in type. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 

//summon pair using #include<utility>

//example :

#include<bits/stdc++.h>
#include<utility>
using namespace std;

int main(){
	pair<int,char> pair1;// (10,'G');
	pair1.first = 10;
	pair1.second = 'G';
	
	cout<<pair1.first<<" "<<pair1.second<<endl;
	
	return 0;
}

//different ways to initialize a pair
pair  g1;         //default
pair  g2(1, 'a');  //initialized,  different data type
pair  g3(1, 10);   //initialized,  same data type
pair  g4(g3);    //copy of g3

//Another way to initialize a pair is by using the make_pair() function. 
g2 = make_pair(1, 'a');

//Another valid syntax to declare pair is:
g2 = {1, 'a'};

// CPP program to illustrate
// Initializing of pair STL
#include <iostream>
#include <utility>
using namespace std;
 
// Driver Code
int main()
{
    // defining a pair
    pair<string, double> PAIR2("GeeksForGeeks", 1.23);
 
    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;
 
    return 0;
}

//Member functions 

/*
1. make_pair() : This template function allows to create a value pair without writing the types explicitly/

SYNTAX : 
Pair_name = make_pair(value1,value2);
*/

#include<bits/stdc++.h>
#include<utility>
using namespace syd;

int main(){
	pair<int, char> PAIR1;
    pair<string, double> PAIR2("GeeksForGeeks", 1.23);
    pair<string, double> PAIR3;
 
    PAIR1.first = 100;
    PAIR1.second = 'G';
 
    PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);
 
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
 
    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;
 
    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;
	
	return 0;
}

/*
2) swap: This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of the same type. 

Syntax:

pair1.swap(pair2) ;
For two given pairs say pair1 and pair2 of the same type, the swap function will swap the pair1.first with pair2.first and pair1.second with pair2.second. 
*/

// CPP Program to demonstrate swap()
// function in pair
#include <iostream>
#include <utility>
 
using namespace std;
 
// Driver Code
int main()
{
    pair<char, int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('B', 2);
 
    cout << "Before swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;
    pair1.swap(pair2);
 
    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;
 
    return 0;
}

