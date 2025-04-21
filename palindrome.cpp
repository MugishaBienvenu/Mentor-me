#include <iostream>
using namespace std;

int main() {
    
    int t;
    int rev = 0;
    
    cout<<" Enter a number : "<<endl;
    cin>>t;
    

    while ( t != 0   ) {

        int dig = t % 10;
        rev = (rev * 10) + dig;
        t = t / 10;

        cout<<" reverse number is : "<<rev<<endl;

    if ( t == rev )
        cout << "Palindrome";

    else
    
        cout << "Not Palindrome";
    return 0;
 }
}
