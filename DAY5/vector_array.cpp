#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    // cout<<"Enter the value of n ";
    // cin>>n;
    vector<int>arr;
    // cout<< arr.size()<<endl;
    // int ans=sizeof(arr)/sizeof(int);
    // cout<<ans<<endl;
    arr.push_back(5);
    arr.push_back(10);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<< arr.size()<<endl;
    
    return 0;
}