#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of test cases "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the rank"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=10){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


}

