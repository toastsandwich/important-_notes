#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void show(int a[] , int array_size){
	for(int i = 0 ;  i < array_size ; i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[] = {1,22,8,8,445,545,88,23,45,456,458,321,784,5645,2,0,1,4};
	
     //sizeof array
	int asize = sizeof(a)/sizeof(a[0]);
     //why did we do this code?
     //answer is simple array is int array which means 4 bytes for each element now what we did was we found sizeof all the array that is 4*no_of_elements and divided it by sizeof(anyone element)
	cout<<"The array to be sorted is : ";
	show(a,asize);

     sort(a,a+asize);
     cout<<"\nsorted array : ";
     show(a,asize);
	return 0;
}
