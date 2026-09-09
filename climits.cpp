// #include <iostream>
// #include <climits>
// using namespace std;

// void findMinMax(int arr[], int size){
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int smallIndex = -1;   // naya variable
//     int largeIndex = -1;   // naya variable

//     for(int i = 0; i < size; i++){
//         if(arr[i] < smallest){
//             smallest = arr[i];
//             smallIndex = i;      // index update karo
//         }

//         if(arr[i] > largest){
//             largest = arr[i];
//             largeIndex = i;      // index update karo
//         }
//     }

//     cout << smallest << smallIndex << endl;
//     cout << largest << largeIndex << endl;
// }

// int main(){
//     int arr[] = {1, 5, -1, 67, 8, 9, 2, -2, 0};
//     int size = 9;
//     findMinMax(arr, size);
//     return 0;
// }

#include <iostream>
#include <climits>
using namespace std;

void swapMinMax(int arr[], int size){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallIndex = -1;
    int largeIndex = -1;

    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            smallIndex = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            largeIndex = i;
        }
    }

    swap(arr[smallIndex], arr[largeIndex]);
}

int main(){
    int arr[] = {2, 56, -1, 7, 9};
    int size = 5;

    swapMinMax(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}