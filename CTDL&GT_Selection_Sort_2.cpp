void Selection_Sort(int a[], int n){
	int min;//vị trí phần tử nhỏ nhất trong dãy hiện hành
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;//ghi nhận vị trí phần tử nhỏ nhất
			}
		}
		swap(a[min], a[i]);
	}
}

void main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Selection_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
