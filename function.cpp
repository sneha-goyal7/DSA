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
//  int decNum(int n){
//     int ans=0;
//     int pow=1;
//     while(n>0){
//         int rem=n%2;
//         n=n/2;
//         ans+=(rem*pow);
//         pow=pow*10;
//     }
//     return ans;
// }
// int reverse(int n){
// int rev=0;
// while(n>0){
//     int rem=n%10;
//     n=n/10;
//     rev=rev*10+rem;
// }
// return rev;
// }
int power(int n){
    int pow=0;
    if(n>0 && (n&(n-1))==0){
        while(n!=1){
            n=n>>1;
            pow++;
        }
    }
    return pow;
}
int main(){
    // int n=-154;
    // int sum =0;
    // while(n!=0){
    //     int dig=n%10;
    //     n=n/10;
    //     sum+=dig;
    // }
    // cout<<sum;
    // cout<<binNum(1011001);
    // cout<<decNum(123);
    // cout<<reverse(523);
    cout<<power(8);
    return 0;
}