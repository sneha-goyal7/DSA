#include <iostream>
#include<climits>
using namespace std;
int getMaxSumR(int mat[][3],int r,int c){
    int maxRowSum=INT_MIN;
    for(int i=0;i<r;i++){
        int rowSum=0;
        for(int j=0;j<c;j++){
            rowSum+=mat[i][j];
        }
        maxRowSum=max(maxRowSum,rowSum);
    }
    return maxRowSum;
}
int getMaxSumC(int mat[][3],int r, int c) {
    int maxColSum = INT_MIN;
    for (int j = 0; j < c; j++) {
        int colSum = 0;
        for (int i = 0; i < r; i++) colSum += mat[i][j];
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
}
int main(){
    int mat[4][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}};
    int r = 4;
    int c = 3;
    cout<<getMaxSumR(mat,r,c)<<endl;
    cout<<getMaxSumC(mat,r,c);
    return 0;
}

//combine method for both rows and columns

// #include <iostream>
// #include <climits>
// using namespace std;

// void getMaxSums(int mat[][3], int r, int c) {
//     int rowSum[4] = {0};   // r size (yahan 4)
//     int colSum[3] = {0};   // c size (yahan 3)

//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             rowSum[i] += mat[i][j];
//             colSum[j] += mat[i][j];
//         }
//     }

//     int maxRow = INT_MIN, maxCol = INT_MIN;
//     for (int i = 0; i < r; i++) maxRow = max(maxRow, rowSum[i]);
//     for (int j = 0; j < c; j++) maxCol = max(maxCol, colSum[j]);

//     cout << "Max row sum: " << maxRow << endl;
//     cout << "Max col sum: " << maxCol << endl;
// }

// int main() {
//     int mat[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     getMaxSums(mat, 4, 3);
//     return 0;
// }