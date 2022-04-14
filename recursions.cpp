#include<iostream>
using namespace std;

//recursions are repeating functions as many times that are needed.
//Let's look at an example, factorial.A very best way to explain recursions.

long long int factorial(int x){
	if(x==0||x==1){
		return x = 1;
	}
	return x*factorial(x-1);
}

int main(){
	long long int i;
    system("cls");
	cout<<"Enter A Number : ";
	cin>>i;
	long long int answer = factorial(i);
	cout<<"Factorial of "<<i<<" is "<<answer<<endl;
	return 0;
}
