#include <iostream>
#include<cmath>
using namespace std;

int main(){
    //   int n;
    //   int sum=0;
    //   cin>>n;
    //   for(int i=1;i<=n;i++){
    //     sum+=i;
    //   }
    //   cout<<sum;
    // int n=9;
    // bool isPrime=true;
    // if(n<=1){
    //     isPrime=false;
    // }
    // for(int i=2;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         isPrime=false;
    //         break;
    //     }
    // }
    // if(isPrime)
    // cout<<"number is prime";
    // else 
    // cout<<"number is not prime";
    int n=5;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
    return 0;
}