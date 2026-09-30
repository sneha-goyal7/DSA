// #include <iostream>
// using namespace std;
// int fact(int n){
//     if(n<0)return 0;
//     if(n<=1)return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }
#include <iostream>
#include<vector>
using namespace std;
void printSubset(vector<int>&arr,vector<int>&ans,int i){
    if(i==arr.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        return;
    }
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1);
    cout<<endl;
    ans.pop_back();
    printSubset(arr,ans,i+1);
}
int main(){
    vector<int>arr={1,2,3};
    vector<int>ans;
    printSubset(arr,ans,0);
    return 0;
}