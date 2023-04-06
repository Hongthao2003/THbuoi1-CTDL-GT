//nguồn lập trình không khó
#include <stdio.h>
 
int search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
      // Trả về chỉ số khi tìm thấy
      return i;
  // Nếu không tìm thấy trả về -1. Vì chỉ số mảng >= 0
  return -1;
}
 
int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = search(arr, n, x);
  if (result != -1) {
    printf("%d xuat hien tai chi so %d", x, result);
  } else {
    printf("%d khong co trong mang", x);
  }
  return 0;
}
