/*
An execption is an unexpected problrm that aries during the execution of a program.

Exception handling mechanism provide a way to transfer control from one part of a program to another.This makes it easy to seperate the error handling code form the code written to handle the actual functionality of the program

For execption handling we have three keywords try , catch & throw

try : A block of code which may cause an exception is typically placed inside the try block.It's followed by one or more catch bloacks.If an execption occurs, it is thrown from the try block.

catch : this block cathches the execption thrown from the try block. Code to handle the exeption is written inside this catch block.

throw : A program throws an exception when a problem shows up .This is done uding a throw keyword.

Every try catch should have a corresponding catch block.A single try block can have multiple catch blocks.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int numerator,denominator; cout<<"Enter Numerator and Denominator : "<<endl;int result;
    cin>>numerator>>denominator;
    try{  
        if(denominator == 0){
        throw denominator;
        }
         result = numerator/denominator;
    }
    catch(int ex){
    cout<<"Execption : Divion by zero not possible";
    }
    cout<<"Division is "<<result<<endl;
    return 0;
}


