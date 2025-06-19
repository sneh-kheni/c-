#include<iostream>


int fibonacci(int n){
    int series;
if (n<2) {
     return 1;
}
    series  =  fibonacci(n-2)+fibonacci(n-1);
return series;
}
int main(){
int a;
int n;
std::cout<<"type the position";
std::cin>>a;
std::cout<<"the value is"<<fibonacci(a);


return 0;

}