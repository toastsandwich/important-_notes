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

//code for fibonnanci series , I have done some minute modifications here to print the series .
#include<iostream>
using namespace std;
int fibbonanci(int n){
	if(n<2){
		return 1;
	}
	return fibbonanci(n-1)+fibbonanci(n-2);
}
int main(){
	system("cls");
	int n=10;
	//cout<<"Enter the term of which you want the value in Fibbonanci Series : ";
	//cin>>n;
	for(int i = 0;i <=n;i++){
        cout<<fibbonanci(i)<<" ";
    }
}
