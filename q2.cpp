#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//  Rachit Sindhu
//  2010990557
//  Set 03
//  Question 2

//Time complexity -> O(N ^2)

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int target;
    cin>>target;


    vector<pair<int, int>> res; // vector for storing the pairs
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target)
                res.push_back({arr[i], arr[j]});
        }
    }

    if(res.size()==0){
        cout<<"Pair not found"<<endl;
        return 0;
    }

    for(auto i:res){
        cout<<"Pair found ("<<i.first<<", "<<i.second<<")\n";
    }
}