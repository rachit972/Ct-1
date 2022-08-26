#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//  Rachit Sindhu
//  2010990557
//  Set 03
//  Question 1

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=1;i<n-1;i+=2){
        //This checks whether the condition is already satisfied
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            continue;
        

        //If it is not, then we store the max of the values in the middle 
        if(arr[i-1]>arr[i])
            swap(arr[i-1],arr[i]);
        
        if(arr[i+1]>arr[i])
            swap(arr[i], arr[i+1]);
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}