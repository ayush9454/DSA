#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end){
        int element=arr[mid];

        if(element==target){
            return mid;
        }
        else if(target<element){
            end=mid-1;
        }
        else {
            start=mid+1;
        }

        mid=(start+end)/2; 
    }
}

int main(){
    int arr[]={2,4,8,10,12,16};
    int size=6;
    int target=16;

    int indexoftarget=binarySearch(arr,size,target);
    if(indexoftarget==-1){
        cout<<"Target not found"<<endl;
    }else{
        cout<<"Target found at "<<indexoftarget <<endl;
    }
}