#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows ";
    cin>>n;
    for (int row=0;row<n;row++){
        //spaces
        for(int space=0;space<n-row-1;space++){
            cout<<" ";
        }

        //front counting
        for(int col=0;col<row+1;col++){
            cout<< row+col+1;
        }

        //reverse counting
        int start = 2*row;
        for(int rev=0;rev<row;rev++){
            cout<<start;
            start-=1;
        }
        cout<<endl;
    }
}