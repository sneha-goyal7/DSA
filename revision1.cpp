#include <iostream>
using namespace std;
// bool isArmstrong(int n) {
//     int arm = 0;
//     int org = n;

//     int digits = 0;
//     while (n != 0) {
//         digits++;
//         n = n / 10;
//     }
//     n = org;

//     while (n != 0) {
//         int dig = n % 10;
//         n = n / 10;
//         int p = 1;
//         for (int i = 0; i < digits; i++)
//             p = p * dig;
//         arm += p;
//     }

//     if (arm == org) return true;
//     else return false;
// }
// bool isPerfect(int n) {
//     if (n <= 1) return false;
//     int sum = 0;
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) sum += i;
//     }
//     return sum == n;
// }
void primeFactors(int n) {
    if (n > 1) cout << n;  
    for (int i = 2; (long long)i * i <= n; i++) {
        while (n % i == 0) {
            n = n / i;
            cout<<i;
        }
    }
}
int main(){
    // int n=4;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int s=0;s<=n-i;s++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
    //     }
    //     for(int j=i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin >> n;
    // if (isArmstrong(n))
    //     cout << n << " is an Armstrong number" << endl;
    // else
    //     cout << n << " is not an Armstrong number" << endl;
    // int n;
    // cin >> n;

    // if (isPerfect(n))
    //     cout << n << " is a perfect number" << endl;
    // else
    //     cout << n << " is not a perfect number" << endl;
    int n;
    cin>>n;
    primeFactors(n);
    return 0;
}