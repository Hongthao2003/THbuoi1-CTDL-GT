#include <iostream> 
using namespace std; 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = search(arr, n, x); 
   (result == -1)? cout<<"Không có phần tử trong mảng"
                 : cout<<"Phần tử có tại chỉ mục " <<result;
   return 0; 
} 
