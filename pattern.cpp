#include <iostream>
using namespace std;

// int main(){
    // int n=3;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){
    //     cout<<"*";
    // }
    // cout<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<"*"<<endl;
    // }
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // int num=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // char ch='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<char('A'+i);
    //     }
    //     cout<<endl;
    // }
    // int k=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<char('A'+k);
    //         k++;
    //     }
    //     cout<<endl;
    // }
    // int n=5;
    // int num=0;
    // for (int i=1;i<=n;i++){
    //     for(int j=1;j<i+1;j++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for(int i=1;i<n;i++){
    //     char ch='A'+(i-1);
    //     for(int j=i;j>=1;j--){
    //         cout<<ch;
    //         ch--;
    //     }
    //     cout<<endl;
    // }
    // int n=5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    // int n=583;
    // int digsum=0;
    // while(n>0){
    //     int lastdig=n%10;
    //     n=n/10;
    //     digsum+=lastdig;
    // }
    // cout<<digsum;
//     int factorial(int n){
//         if(n==0 || n==1) return 1;
//         int fact=1;
//         for(int i=1;i<=n;i++){
//             fact*=i;
//         }
//         return fact;
//     }
//     int nCr(int n,int r){
//         int fact_n=factorial(n);
//         int fact_r=factorial(r);
//         int fact_nmr =factorial(n-r);//n subtract r(n-r)
//         return fact_n/(fact_r * fact_nmr);
//     }
//     int main(){
//         cout << nCr(8, 2) ;
//     return 0;
// }
int decnum(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        n=n/2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main(){
    cout<<decnum(12);
    return 0;
}