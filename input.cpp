#include <iostream>
using namespace std;

int main(){
    cout <<"Enter a number: \n";
    int a ;
    cin >> a; //taking input
    cout<< "You entered " << a ;
    char ch = 65;
    cout<< "\nThe value of ch is: " <<ch;

    //the smallest addressable memory is 1 byte
    //a byte is used by boolean data type to store values
    //1 byte= 8 bits
    //signed datatype = [-2^(n-1) --> 2^(n-1)-1]
    //unsigned int = [0 --> 2^(n)-1]

    bool b = false ;
    cout<<"\nEntered "<< b;
}