#include <stdio.h>
#include <iostream>
using namespace std;
// Hàm đổi chỗ 2 số nguyên
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
  
// Hàm selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    for (i = 0; i < n-1; i++)
    {
    // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
  
    // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(arr[min_idx], arr[i]);
    }
}
  
/* Hàm xuất mảng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << arr[i];
        cout<<"\t";
      }
}
  
int main()
{
    int n;
    int a[n];
    do{
        cout << "\nNhập vào số lượng phần tử có trong mảng: ";
        cin >> n;
    }while(n <= 0);
      
    for(int i = 0;i < n;i++){
        cout<<"a["<<i<<"]=";
       cin >> a[i];
    };
  
    selectionSort(a, n);
  
    cout<<"Mảng sau khi được sắp xếp: \n";
    printArray(a, n);
  
    cout<<"\n---------------------------------------\n";
    
}
