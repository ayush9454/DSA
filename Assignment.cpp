#include<iostream>
using namespace std;

int main(){
    // //reverse printing
    // int n;
    // cout<< "Enter a number n \n";
    // cin >> n;
    // for (int i=n;i>=1;i--){
    //     cout<< i <<endl;
    // }

    //factorial of number 

    // int num;
    // int fact =1;
    // cin >> num;
    // for(int i=0; i<num; i++){
    //     fact= fact*(num-i);
    // }
    // cout<< fact;

    //check given triangle is valid or not
//     int a,b,c;
//     cout << "Enter side 1 ";
//     cin >> a;
//     cout << "Enter side 2 ";
//     cin >> b;
//     cout << "Enter side 3 ";
//     cin >> c;

//     if (a+b>c && b+c>a && c+a>b){
//         cout << "Valid triangle";
//     }
//     else {
//         cout << "In-Valid triangle";
//     }
    // Prime number program
    int num;
    cout << "Enter a number ";
    cin >> num;
    for(int i=2;i<num;i++){
        if(num%i == 0){
            cout << "Not a prime number \n";
            break;
        }
        else {
            cout << "Is a prime number \n";
            break;
        }
    }

}