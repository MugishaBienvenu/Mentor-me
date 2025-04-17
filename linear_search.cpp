#include<iostream>
using namespace std;

int main(){
    int list[5]={5,8,2,9,4};
    int num=9;
    int len=sizeof(list)/sizeof(list[0]);

    for(int i=0;i<=len;i++){
        if(list[i] == num){
            cout<<num<<endl;
            cout<<" found at index : "<<i<<endl;

        }
      
    }
    
    return 0;
}
