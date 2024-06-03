#include<iostream>
#include<limits.h>
using namespace std;

bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }return false;
}

int findMax(){
    int maxi=INT_MIN;
    int arr[]={2,4,5,8,7,96,54,84,7,21,10};
    int size=11;

    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }return maxi;
}

int findMin(){
    int mini=INT_MAX;
    int arr[]={-2,4,5,-8,7,96,54,-84,7,21,10};
    int size=11;

    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }return mini;
}


int main(){
    int arr[]={2,4,5,2,8,7,9,3};
    int size=8;
    int key;
    cout<<"Enter the value key ";
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
    cout<<endl<<"Maximum element is ";
    cout<<endl<<findMax();
    cout<<endl<<"Minimum element is ";
    cout<<endl<<findMin();
}