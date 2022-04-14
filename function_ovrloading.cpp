#include<iostream>
using namespace std;
int sum(int i,int j, int k){
	cout<<"Using the function of three arguments"<<endl;
	return i+j+k;
}

int sum(int i,int j){
	cout<<"Using the function of two arguments"<<endl;
	return i+j;
}
int main(){
	int a,b,c;
	cout<<"The sum of 3 and 29 is : "<<sum(3,29)<<endl;
	cout<<"The sum of 3 , 19 and 20 is : "<<sum(3,19,20)<<endl;
	return 0;
}

/*
  AS WE RUN THIS CODE WE SEE THAT THERE ARE TWO FUNCTIONS AND TWO ARGUMENTS.
  BUT OUR C++ IS SMART AND DID CHOSE THE TWO DIFFERENT FUNCTIONS ACCORDINGLY.
  WE ALSO SENT A FLAG TO CHECK WHAT FUNCTION WAS USED
*/

//LET US CREATE ANOTHER PROGRAM TO FUND VOLUMES OF DIFFERENT SHAPES 
#include<iostream>
using namespace std;
float volume(double r , double h);
float volume(float r);
float volume(float b , float l , float h);
int main(){
	cout<<"The volume of cuboid of dimensioins 3.9 , 4.7 , 5.1 is "<<volume(3.9,4.7,5.1)<<endl;
	cout<<"The volume of cube of dimensioins 3.8 is "<<volume(3.8)<<endl;
	cout<<"The volume of cylinder of dimensioins 3.9 (radius), 5.1(height) is "<<volume(3.9,5.1)<<endl;
	return 0;
}
float volume(double r , double h){
	return 3.14*r*r*h;
}
float volume(float r){
	return r*r*r;
}
float volume(float b , float l , float h){
	return l*b*h;
}
