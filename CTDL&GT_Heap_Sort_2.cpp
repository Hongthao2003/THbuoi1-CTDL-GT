#include <iostream> 
using namespace std;

int N = 6; /* Số phần tử của heap */
void max_heap(int A[], int i, int heap_size) {
    int largest; /* Chỉ số của phần tử lớn nhất trong bộ ba: node hiện tại
                         con bên trái, và con bên phải của nó */
    int left = 2 * i; /* Vị trí của con bên trái */
    int right = 2 * i + 1; /* Vị trí của con bên phải */
    if (left <= heap_size and A[left] > A[i]) /* heap_size là số phần tử trong mảng*/
        largest = left;
    else
        largest = i;
    if (right <= heap_size and A[right] > A[largest])
        largest = right;
    if (largest != i) {
        swap(A[i], A[largest]); /* Thực hiện đổi chỗ hai phần tử nếu 
                                              giá trị của node cha nhỏ hơn node con */
        max_heap(A, largest, heap_size); /* Gọi đệ quy node tại vị trí mới */
    }
}

void run_maxheap(int A[]) { /* Áp dụng hàm max_heap cho tất cả các node
                                               trừ node lá */
    for (int i = N / 2; i >= 1; i--) {
        max_heap(A, i, N);
    }
}

void max_heap_sort(int A[ ])
{
    int heap_size = N;
    run_maxheap(A);
    for(int i = N; i>=2 ; i-- )
    {
        swap(A[ 1 ], A[ i ]);
        max_heap(A, 1, --heap_size);
    }
}

int main() {
    int A[N+1] = {-1,8,4,7,1,3,5}; /* Mảng chứa 7 phần tử, với phần tử 
                                      của heap bắt đầu từ vị trí 1 tới N
                                      phần tử dầu tiên của mảng chỉ có tác
                                      dụng làm lấp đầy mảng, giá trị bất kỳ */
    max_heap_sort(A);
    printf("\n\tGiá trị của mảng sau khi áp dụng hàm max_heap_sort\n");
    printf("\t");
    for (int i = 0; i < N+1; i++) { /* In ra giá trị của mảng sau khi sắp xếp với 
                                                 hàm max_heap_sort */
        printf("%d    ", A[i]);
    }
}
