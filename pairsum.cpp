#include <iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>nums,int target){
    vector<int>ans;
    int n=nums.size();
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(nums[i]+nums[j]==target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }
    // return ans;
    int i=0;
    int j=n-1;
    while(i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum>target)j--;
        else if(pairsum<target)j++;
        else 
         ans.push_back(i);
         ans.push_back(j);
         return ans;

    }
}
int main(){
    vector<int >nums={2,6,3,7,-8,9,3};
    int target=5;
    vector<int>ans=pairsum(nums,target); 
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}