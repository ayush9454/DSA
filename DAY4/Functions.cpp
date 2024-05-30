#include<iostream>
using namespace std;

// void printname() {
//         int n;
//         cout<<"Enter the value of n ";
//         cin>>n;
//         for(int i=0;i<n;i++){
//             cout<<"Ayush singh"<<endl;
//         }
//     }

void printNumber(int num){
    cout<<"hello world";
}

int addsum(int a, int b){
    return a+b;
}

int main(){
    //printname();
    int a=5 ;
    int b=10;
    //printNumber(a);  //pass by value
    cout<<addsum(a,b);
}