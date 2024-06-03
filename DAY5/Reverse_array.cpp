#include<iostream>
using namespace std;



int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size=8;
    int start=0;
    int end=size-1;

    // while(true){
    //     if(start>end){
    //         break;
    //     }
    //     if(start==end){
    //         cout<<arr[start]<<' ';
    //     }else{
    //         cout<<arr[start]<<' ';
    //         cout<<arr[end]<<' ';
    //     }
    //     start++;
    //     end--;
    // }
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}