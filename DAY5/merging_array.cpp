#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int arr[]={1,3,5,7,2,4,6};
    // int sizea=7;
    // int arrb[]={3,3,4,10};
    // int sizeb=4;

    // vector<int>arrc;
//Finding unique elements and merging 
    // for(int i=0;i<sizea;i++){
    //     for(int j=0;j<sizeb;j++){
    //         if(arr[i]==arrb[j]){
    //             arrb[j]=-1; //mark
    //             arrc.push_back(arr[i]);
    //         }
    //     }
    // }

//Finding pair of elements foming a sum 
    // for(int i=0;i<sizea;i++){
    //     for(int j=i+1;j<sizea;j++){
    //         for(int k=j+1;k<sizea;k++){
    //             if(arr[i]+arr[j]+arr[k]==9){
    //             cout<<"("<<arr[i]<<","<<arr[j]<<','<<arr[k]<<')'<<endl;
    //         }
    //         }
    //     }
    // }
    
//Meriging two arrays and printing the combined array
    // for(int i=0;i<sizea;i++){
    //     arrc.push_back(arr[i]);
    // }
    // for(int i=0;i<sizeb;i++){
    //     arrc.push_back(arrb[i]);
    // }
    // cout<<"Printing the combined array ";
    // for(int i=0;i<arrc.size();i++){
    //     cout<<arrc[i]<<' ';
    // }

// Sort 0 and 1s
    vector<int>arr{0,1,0,0,1,0,1,0,1,1,0,1};

    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i!=end){
        if (arr[i]==0)
        {
            swap(arr[start],arr[i]);
            i++;
            start++;  
        }
        else
        {
            swap(arr[end],arr[i]);
            end--;  
        }
        
    }

    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<' ';
    }


    return 0;

}