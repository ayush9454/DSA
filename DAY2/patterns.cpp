#include<iostream>
using namespace std;

int main(){
    //pattern 1
    int rowlen,collen;

    cin>> rowlen;
    cin>> collen;
    for(int row=0; row<rowlen;row++){
        if(row==0 || row == rowlen-1){
            for(int col =0;col<collen;col++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for (int i=0; i<collen-2;i++){
                cout<<"  ";
            }
            cout<<"*";
        }
    cout<< endl;
    }
}