// #include <iostream>
// #include <vector>
// using namespace std;

// int primarySum(const vector<vector<int>>& mat) {
//     int n = mat.size();
//     int pd = 0;
//     for (int i = 0; i < n; i++) {
//         pd += mat[i][i];//sd+=mat[i][n-1-i];
//     }
//     return pd;
// }

// int main() {
//     vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
//     cout << primarySum(mat);  // 1 + 5 + 9 = 15
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

pair<int,int> diagonalSums(const vector<vector<int>>& mat) {
    int n = mat.size();
    int pd = 0, sd = 0;
    for (int i = 0; i < n; i++) {
        pd += mat[i][i];
        sd += mat[i][n - 1 - i];
    }
    return {pd, sd};
}

int main() {
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    pair<int,int> result = diagonalSums(mat);
    cout << result.first << " "<<result.second<<endl;
    cout<<result.first+result.second;
    return 0;
}