// nguồn freetuts
#include <bits/stdc++.h>
using namespace std;
 
//Hàm tìm kiếm nhi phân
int binarySearch(int arr[], int left, int right, int x) {
    int middle;
 
    while(left <= right) {
        middle = (left + right) / 2;
        if (arr[middle] == x)
            return middle;
        if (x > arr[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
}
int main() {
    int arr[] = {15, 20, 25, 30, 31, 44, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 25;
    int result = binarySearch(arr, 0, n-1, x);
 
    cout << result;
}
