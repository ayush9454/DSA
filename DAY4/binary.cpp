#include<iostream>
#include<cmath>
using namespace std;

int DecimalToBinaryMethod1(int n){
    //Division method
    int binaryno =0 , i=1;
    while(n>0){
        float bit=n%2;
        binaryno=bit*i+binaryno;
        n=n/2;
        i*=10;
    }
    return binaryno;
}

int DecimalToBinaryMethod2(int n){
    //Bitwise method
    int binaryno =0 ;
    int i=1;
    while(n>0){
        int bit=(n&1);
        binaryno=bit*i+binaryno;
        n=n>>1;
        i*=10;
    }
    return binaryno;
}

int BinaryToDecimal(int n){
    int decimal=0,i=0;
    while(n){
    int bit=n%10;
    decimal=decimal+bit*pow(2,i++);
    n/=10;
    }
    return decimal;
}

int main(){
    int n;
    cin>>n;
    // int binary=DecimalToBinaryMethod1(n);
    // cout<<binary<<endl;
    // int binary2=DecimalToBinaryMethod2(n);
    // cout<<binary2<<endl;
    cout<<BinaryToDecimal(n);
}
