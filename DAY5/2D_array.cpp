#include<iostream>
#include<vector>
using namespace std;

// void PrintRowWiseSum(int arr[][3],int rows, int cols){

// }

int main(){
    vector<int>arr[3][3];
     int brr[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
                    
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            
            sum =sum + brr[i][j];
            
        }
        cout<<sum<<" "<<endl;
    }


    // int brr[2][4]={};
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>brr[i][j];
    //     }
    //     cout<<endl;
    // }
    
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<4;j++){
    //         sum=(brr[i]+brr[j]);
    //         cout<<sum;
    //     }
    //     cout<<endl;
    // }
}