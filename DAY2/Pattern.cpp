#include<iostream>
using namespace std;

int main(){
    // //half pyramid
    // int n;
    // cout<< "Enter number of rows you want ";
    // cin >> n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<< "* ";
    //     }
    //     cout << endl;
    // }

    //inverted half pyramid
    // int n;
    // cout<< "Enter number of rows you want ";
    // cin >> n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<< "* ";
    //     }
    //     cout << endl;
    // }

    // Number half pyramid
    // int n;
    // cout<< "Enter number of rows you want ";
    // cin >> n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<< j+1;
    //     }
    //     cout << endl;
    // }

    //Full pyramid
    int n;
    cout<< "Enter number of rows you want ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<" ";
        for(int j=0;j<2*(i+1);j++){
            cout<< "* ";
        }
        cout << endl;
    }
    


}