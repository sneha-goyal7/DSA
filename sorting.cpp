#include <iostream>
#include<algorithm>
using namespace std;
// void bs(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// void ss(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int smallestIdx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestIdx])smallestIdx=j;
//             swap(arr[i],arr[smallestIdx]);
//         }
//     }
// }
void is(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }

}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
   int arr[]={4,5,9,2,3,1};
//    bs(arr,6);
    // ss(arr,6);
    is(arr,6);
   printarr(arr,6);
    return 0;
}