#include <iostream>
using namespace std;
// int binNum(int n){
//     int ans=0;
//     int pow=1;
//     while(n>0){
//         int rem=n%10;
//         n=n/10;
//         ans+=(rem*pow);
//         pow=pow*2;
//     }
//     return ans;
// }
// int rev(int n){
//     int rev=0;
//     while(n>0){
//         int rem=n%10;
//         n=n/10;
//         rev=rev*10+rem;
//     }
//     return rev;
// }
// int linear(int arr[],int size, int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// void revarr(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// void unique(int arr[],int size){
//     for(int i=0;i<size;i++){
//         bool isunique=true;
//         for(int j=0;j<size;j++){
//             if(i!=j && arr[i]==arr[j]){
//                 isunique=false;
//                 break;
//             }
//         }
//         if(isunique){
//             cout<<arr[i];
//         }
//     }
// }
void inter(int arr1[],int n , int arr2[], int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i];
            arr2[j]=-1;
            break;
            }
            
        }
    }
}
int main(){
        // cout<<binNum(1011001);
        // cout<<rev(156);
        // int arr[]={1,5,-1,67,8,9,2,-2,0};
        // cout<<linear(arr,9,4);
        // int arr[]={1,2,3,4,5,6,7};
        // revarr(arr,7);
        // for(int i=0;i<7;i++){
        //     cout<<arr[i];
        // }
        // int arr[]={2,56,-1,7,9};
        // int sum=0;
        // for(int i=0;i<5;i++){
        //     sum+=arr[i];
        // }
        // cout<<sum;
        // int arr[]={10,20,10,30,20,40,50};
        // int size=sizeof(arr)/sizeof(arr[0]);
        // unique(arr,size)
        int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    inter(arr1, 5, arr2, 4);

    return 0;
}