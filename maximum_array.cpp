#include <iostream>
using namespace std;

int main(){

int my_arr;
int a=max(my_arr);

cout<<"Enter different element separated: \n";
cin>>my_arr;

for(int i=0;i<my_arr;i++){
    if(i<my_arr){
        cout<<"max is:"<<a;
    }

    else {
        cout<<"min is :";

    }
}

return 0;
}