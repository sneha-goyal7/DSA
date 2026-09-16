#include <iostream>
#include<vector>
using namespace std;
int bs(vector<int>arr,int tar){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(tar==arr[mid])return mid;
        else if(tar<arr[mid])end=mid-1;
        else st=mid+1;
    }
    return -1;
}
int main(){
    vector<int>arr={2,4,6,7,9,10};
    cout<<bs(arr,7);
    return 0;
}