#include<iostream>

using namespace std;
// calculate the area of circle
float volume(float r){
    return (3.14 * r * r);
}
// now purpose of the overloading isn thay you can use the function multiple time with difff argument but you can stilll gets the answer
float volume(int l,b,h){
    return l*b*h;
}

int main()
{
int r;
// find the are of A CIRCLE WHOSE RADIUS IS 2.25 CM
cout<<"enter the radius of the circle"<<endl;
cin>>r;
cout<<"the volume is "<<volume(r);
return 0;

}