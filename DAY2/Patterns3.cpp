#include<iostream>
using namespace std;

int main(){

//FULL PYRAMID
    int n;
    cout<<"Enter number of rows ";
    cin>> n;
    for(int row=0;row<n;row++){

        //space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }

        //star
        for (int str=0;str<row+1;str++){
            cout<<"* ";
        }
        cout<<endl;
    }

// // //INVERTED FULL PYRAMID  
//     // int n;
//     // cout<<"Enter number of rows ";
//     // cin>> n;
//     for(int row=0;row<n;row++){

//         //space
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }

//         //star
//         for (int str=0;str<n-row;str++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
}
    
