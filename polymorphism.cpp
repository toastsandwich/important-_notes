/*The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.*/
//types : runtime  --> virtual functions
//        compile time ---> operator overloading , function overloading 


//program to demonstrate function overloading 
#include<bits/stdc++.h>
using namespace std;

class fun{

    public :
        void  func(double x , double y){
            cout << x << " , " << y << endl;
        }
        void func(int x){
            cout<<x<<endl;
        }
        void func(string y){
            cout<<y;
        }
};
int main(){
    fun c1;
    system("cls");
    c1.func(16.5,7.9);
    c1.func(4);
    c1.func("Geeks is best");
    return 0;
}    

//program to demonstrate operator overloading
#include<iostream>
using namespace std;
   
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)  {real = r;   imag = i;}
       
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const &obj) {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
};
   
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
}

//runtime polymorphism 
//function overriding or virtual functions

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//parent class / base class
class base{
    public :
        virtual void print(){
        cout<<"print base class"<<endl;
        }
        
        void show(){
        cout<<"show base class"<<endl;
        }  
};

//child class / derived class
class derived : public base{
    void print() //print() is already virtual function in derived class, we could also declared as virtual void print() explicitly
    {
    cout<<"print derived class"<<endl;
    }
    void show(){
    cout<<"show derived class"<<endl;
    }
};
//  int main(){
    
     bptr->print();
     bptr->show();
     return 0;
 }
