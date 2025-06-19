#include<iostream>
using namespace std;

int main(){


// *************POINTER*************
// WHAT IS POINTER
// IT IS A DATATYPE WHICH HOLDS THE ADRESS OF THE OTHER DATATYPE

int a=3;
int* b=&a;
// HERE &=(ADRESS OF) OPERATOR
// *= (VALUE OF)DEREFERENCE OPERATOR

 int c=a;//these holds the value of operator NOT THE ADRESS
cout<<"value of b"<<b<<endl;
cout<<"value of b"<<&a<<endl;
// these both are same

cout<<"value of c is"<<c<<endl;
cout<<"value stored at b is"<<*b<<endl;
//  POINTER TO POINTER
int** d = &b;
cout<<"we use ** to find the adress of a pointer(now here pointers is already stores someones adress) "<<d;




    return 0;
}