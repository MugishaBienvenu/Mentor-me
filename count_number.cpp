#include<iostream>
using namespace std;



int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int sum_of_odd=0;
int sum_of_even=0;

int len =sizeof(arr)/sizeof(arr[0]);

for(int i=0; i < len; i++){
    
    if(arr[i] %2 == 0){
        sum_of_even++;

    }
    else{
        sum_of_odd++;

    }
}
cout<<"sum of even number are : "<<sum_of_even<<endl;

cout<<" sum of odd number are : "<<sum_of_odd;


return 0;
}