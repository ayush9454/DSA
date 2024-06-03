#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    int arr[10];
    memset(arr,2,sizeof(arr));
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    for(int i=0;i<10;i++){
        arr[i]=1;
        cout<<arr[i]<<endl;
    }
}