#include <iostream>
#include<vector>
using namespace std;
// int bs(vector<int>arr,int tar){
//     int st=0,end=arr.size()-1;
//     while(st<=end){
//         int mid=(st+end)/2;
//         if(tar==arr[mid])return mid;
//         else if(tar<arr[mid])end=mid-1;
//         else st=mid+1;
//     }
//     return -1;
// }
bool isValid(vector<int>&arr,int n,int m,int maxAllowedPages){
    int student=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPages) return false;
        if(pages+arr[i]<=maxAllowedPages) pages+=arr[i];
        else {student++;
        pages=arr[i];}
    }
    return student<=m;
}
int allocateBooka(vector<int>&arr,int n,int m){
    if(m>n)return -1;/////here is the last condition base case
    int ans=-1;
    int st=0,end=0;
    for (int i = 0; i < n; i++) end += arr[i]; 
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        } 
        else st=mid+1;
    }
    return ans;
}
int main(){;
    // vector<int>arr={2,4,6,7,9,10};
    // cout<<bs(arr,7);
     vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int m = 2;
    int result = allocateBooka(arr, n, m);
    cout <<result;
    return 0;
}