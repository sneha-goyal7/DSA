#include <iostream>
#include <climits>
// #include<algorithm>
using namespace std;
void findminmax(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    // int smallest = -1;
    // int largest = -1;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        
        largest = max(arr[i], largest);
    }
    cout << smallest << largest;
}
int main()
{
    int arr[] = {2, 7, 1, 5, -8, 9, 4};
    findminmax(arr, 7);
    return 0;
}