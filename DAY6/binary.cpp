#include<iostream>
using namespace std;

int binarySearch(int arr[100], int size, int target){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        int element=arr[mid];
        if(element==target){
            return mid;
        }else if(element<target){
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
}

int main(){
    int arr[100],size,target,result;
    cout<<"Enter the size of the array \n";
    cin>>size;

    cout<<"Enter the elements of the array \n";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target \n";
    cin>>target;
    result=binarySearch(arr,size,target);
    cout<<"Target found at index "<<result;
}