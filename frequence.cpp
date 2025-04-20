#include<iostream>
#include<map>
using namespace std;


int main(){

int arr[]={1,2,2,3,3,3};

int len = sizeof(arr)/sizeof(arr[0]);

map<int, int> frequence;

for(int i = 0; i < len; i++){
    frequence[arr[i]]++;
}

for( auto& i : frequence ){
    cout<< i.first<< "->" << i.second<<endl;
}

return 0;

}