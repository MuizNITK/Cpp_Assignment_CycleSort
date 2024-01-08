#include <iostream>
#include <vector>
using namespace std;
void findErrorNums(vector<int>& nums, vector<int>& ans) {
        int n=nums.size();
        int i=0;
        while(i<n) {
            int correctIdx=nums[i]-1;
            if(nums[i]==nums[correctIdx]) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) ans.push_back(i+1); 
        }
    }
int main(){
    int arr[]={4,3,2,7,8,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    vector<int> ans;
    findErrorNums(v,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}