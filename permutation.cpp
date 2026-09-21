#include <iostream>
#include<vector>
#include<algorithm>
using namespace std; 
  void nextPermutation(vector<int>& nums) {
        int piv=-1,n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                piv=i;
                break;
            }
        }
        //base reverse case
        if(piv==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>piv;i--){
            if(nums[i]>nums[piv]) {
                swap(nums[i],nums[piv]);
                break;
            }
        }
        //reverse case 
        int i=piv+1,j=n-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
int main(){
    vector<int> nums = {2,4,5};  
    nextPermutation(nums);  
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}