#include<iostream>
#include<string>
using namespace std;
class bank{
// private:
// int emp_id,emp_salary;
// string emp_name;
// string emp_address;
public:
// bank(){
//     cout<<"This is non parameterized constructor"<<endl;
// }


 

// int emp_working_time;
// string emp_email;
// int experience;
int salary;
string name;
string adress;


bank(int s,string n,string a){
salary=s;
 name=n;
 adress=a;
}

// int emp(){
    
// if(experience>5){
//        return salary + 5000;
// }
// else{
//     return salary-5000;
// }
  

// }
void needinfo(){
    cout<<salary<<endl;
    cout<<name<<endl;
    cout<<adress<<endl;

}

};






int main(){

    // c++ is initially called c with classes
    // classes --> structures + more
    // classes-->can have methods and properties unlike the structure
    // classes-->can have few members private and few as public
    // you can declare objects along with the class declaration like this:
    // class{
    //     // class defination
    // }sneh,mukhesh;
// bank e1;

bank e1(20000,"sneh","surat");
e1.needinfo();

// e1.emp_email="snehkheni54@gmail.com";
// cout<<e1.emp_email<<endl;

// e1.experience=6;
// e1.salary=20000;
// int emp = e1.emp();

//     cout<<emp;




return 0;
}