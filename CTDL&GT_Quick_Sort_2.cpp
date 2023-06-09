#include <iostream>
using namespace std;
void Quick_Sort(int a[], int left, int right){
	int i, j, x;
	x = a[(left+right)/2];
	i = left; j = right;
	do{
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		if(i <= j){
			swap(a[i],a[j]);
			i++; j--;
		}
	}while(i <= j);
	if(left<j){
		Quick_Sort(a, left, j);
	}
	if(i<right){
		Quick_Sort(a, i, right);
	}
}

void main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Quick_Sort(a, 0, 4);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}

