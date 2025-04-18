#include<iostream>
using namespace std;

void swap(int* a,int* b){
    

int temp=*a;

   *a=*b;

   *b = temp;



}

int main (){

int a=4;
int b=7;

swap(&a,&b);

cout<<"swap a = " <<a <<"  swap  b = " <<b;
 
}