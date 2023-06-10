// nguồn freetuts
#include <bits/stdc++.h>
using namespace std;
 
//Hàm tìm kiếm nhi phân
int binarySearch(int arr[], int left, int right, int x) {
    int middle;
 
    while(left <= right) {
        // Lấy vị trí ở giữa left và right
        middle = (left + right) / 2;
 
        // Nếu phần từ ở giữa bằng x thì trả về
        // vị trí
        if (arr[middle] == x)
            return middle;
 
        // Nếu x lớn hơn phần tử ở giữa thì
        // chắc chắn nó nằm bên phải.
        // Chỉ định left phần từ ở giữa + 1
        if (x > arr[middle])
            left = middle + 1;
        else
            //Ngược lại
            right = middle - 1;
    }
 
    //Trả về -1 nếu không tìm thấy gía trị trong mảng.
    return -1;
}
int main() {
    int arr[] = {15, 20, 25, 30, 31, 44, 66};
 
    //Lấy ra độ dài của mảng
    int n = sizeof(arr) / sizeof(arr[0]);
    //Phần từ cần tìm
    int x = 25;
     
    // n -1 là vị trí cuối cùng trong mảng.
    int result = binarySearch(arr, 0, n-1, x);
 
    cout << result;
}
