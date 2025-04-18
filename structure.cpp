#include <iostream>
using namespace std;

struct {
    string name;
    int age;
    double mark;

}student;

int main(){

    student.name="john";
    student.age=20;
    student.mark=78.5;

    cout<<" Name: " <<student.name<<endl;

    cout<<"Age : " <<student.age<<endl;

    cout<<"Marks : " <<student.mark;

}