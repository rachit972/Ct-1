#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//  Rachit Sindhu
//  2010990557
//  Set 03
//  Question 2

//Time complexity -> O(N log(N))

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int target;
    cin>>target;


    vector<pair<int, int>> res; // vector for storing the pairs
    sort(arr.begin(), arr.end());  // sorts the array 

    int begin=0, end=n-1;
    while(begin<end){
        int sum=arr[begin]+arr[end];
        if(sum==target){
            res.push_back({arr[end], arr[begin]}); //when the sum of the values is equal to target then adds the pair to result;
            begin++;
            end--;
        }else if(sum<target) //if the sum is less than target then we are increasing the value of begin
            begin++;
        else
            end--; // if the sum is greater than target, then we are decreasing the value of end
    }

    if(res.size()==0){
        cout<<"Pair not found"<<endl;
        return 0;
    }

    for(auto i:res){
        cout<<"Pair found ("<<i.first<<", "<<i.second<<")\n";
    }
}