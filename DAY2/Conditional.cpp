#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter the marks \n";
    cin >> marks;
    // if(marks>90){           //One way of doing
    //     cout << "A";
    // }
    // else{
    //     if(marks>80){
    //         cout<< "B";
    //     }
    //     else{
    //         if(marks>70){
    //             cout<<"C";
    //         }
    //         else{
    //             cout<< "D";
    //         }
    //     }
    // }


    //another way of doing
    if (marks>90){
        cout<< "A grade";
    }
    else if (marks>80){
        cout<< "B grade";
    }
    else if (marks>70){
        cout << "C Grade";
    }
    else if (marks>70){
        cout << "D Grade";
    }
    else {
        cout<< "F Grade";
    }
    int bro_num;
    cout<< "Enter your number ";
    cin >> bro_num;
    if(bro_num == 0){
        cout << "Baat ban jyegi";
    }
    else{
        cout<< "Baat nhi banegi ";
    }
}