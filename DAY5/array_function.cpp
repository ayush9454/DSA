#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void inc(int arr[],int size){
    arr[0]=arr[0]+10;
   printArray(arr,size);
}



int main(){
    int arr[]={5,4,8,9};
    int size=4;
    inc(arr, size);
    return 0;

}