//  ***********************ARRAYS******************
// Array can store only single type of datatype ex;
// if in declare the function int now we can save only int data in array
#include<iostream>

using namespace std;
int main()
{

int marks[5]={67,56,88,45,74};
cout<<marks[0]<<endl;
marks[2]=444;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<marks[4]<<endl;
// here you can also change the value of an array

// THERE IS ALSO ANOTHER METHOD TO MAKE THE ARRAY

int mathmarks[5];
mathmarks[0]=99;
mathmarks[0]=97;
mathmarks[0]=96;
mathmarks[0]=97;
mathmarks[0]=98;

for (size_t i = 0; i < 4; i++)




while(i<=4){
   

cout<<"hi"<<marks[i]<<endl;
i++;
}
// STORING ARRAY WITH PONTER

int* p = marks;
cout<<*p<<endl;//now this will give me value of marks[0]
cout<<*(p+1)<<endl;//this one marks[1]
cout<<*(p+2)<<endl;//this one marks[2]

cout<<*++p<<endl;//this will increment then print the value
cout<<*p++<<endl;//this will print value then increases
cout<<*p<<endl;
cout<<*p++<<endl;
cout<<*p<<endl;

return 0;
    }


