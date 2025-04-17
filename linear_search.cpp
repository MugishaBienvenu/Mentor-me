#include<iostream>
using namespace std;

int main(){
    int list[5]={5,8,2,9,4};
    int num;

    for(auto i : list){
        if(list[i] == num){
            cout<<num<<endl;
            cout<<" found at index : "<<list[3]<<endl;

        }
      
    }
    
    return 0;
}