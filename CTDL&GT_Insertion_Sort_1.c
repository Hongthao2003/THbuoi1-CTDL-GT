// nguồn tại freetuts
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
/* Hàm sắp xếp sử dụng thuật toán sắp xếp chèn */
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
  
       /* Di chuyển các phần tử có giá trị lớn hơn giá trị 
       key về sau một vị trí so với vị trí ban đầu
       của nó */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
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
 
    insertionSort(a, n);
    cout<<"Mảng sau khi được sắp xếp: \n";
    printArray(a, n);
  
    cout<<"\n-------------------------------------\n";
}
