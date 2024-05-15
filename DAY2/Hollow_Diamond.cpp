#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows ";
    cin>> n;
    for(int row=0;row<n;row++){
    //spaces
    for(int col=0;col<n-row-1;col++){
        cout<<" ";
    }

    //stars and spaces
    for(int str=0;str<2*row+1;str++){
        if(str==0 || str==2*row){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
    }

    for(int row=0;row<n;row++){
      //spaces
    for(int col=0;col<row;col++){
        cout<<" ";
    }

    //stars and spaces
    for(int str=0;str<2*n-2*row-1;str++){
        if(str==0|| str== 2*n-2* row-2){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
   }
}
