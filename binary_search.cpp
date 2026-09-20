#include <iostream>
#include<vector>
#include<algorithm>
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
// bool isValid(vector<int>&arr,int n,int m,int maxAllowedPages){
//     int student=1,pages=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>maxAllowedPages) return false;
//         if(pages+arr[i]<=maxAllowedPages) pages+=arr[i];
//         else {student++;
//         pages=arr[i];}
//     }
//     return student<=m;
// }
// int allocateBooks(vector<int>&arr,int n,int m){
//     if(m>n)return -1;
//     //here is the last condition base case
//     int ans=-1;
//     int st=0,end=0;
//     for (int i = 0; i < n; i++) end += arr[i]; 
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(isValid(arr,n,m,mid)){
//             ans=mid;
//             end=mid-1;
//         } 
//         else st=mid+1;
//     }
//     return ans;
// }
bool isPossible(vector<int>&arr,int n,int c,int minAllowedDist){
    int cows=1,lastStallPos=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-lastStallPos>=minAllowedDist){
            cows++;
            lastStallPos=arr[i];
        }
        if(cows==c){
            return true;
        }
    }
    return false;
}
int getDistance(vector<int>&arr,int n,int c){
    sort(arr.begin(),arr.end());
    int st=1,end=arr[n-1]-arr[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,c,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){;
    // vector<int>arr={2,4,6,7,9,10};
    // cout<<bs(arr,7);
    // vector<int> arr = {12, 34, 67, 90};
    // int n = arr.size();
    // int m = 2;
    // int result = allocateBooks(arr, n, m);
    // cout <<result;
    vector<int>arr={1,2,8,4,9};
    cout<<getDistance(arr,5,3);
    return 0;
}