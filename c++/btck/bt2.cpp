#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
    //Lặp từng phần tử của mảng và kiểm tra.
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    // Trả về -1 nếu đã duyệt hết mà ko tìm thấy.
    return -1;
}
void nhapmang(int a[], int n) {
    int arr[] = { 2, 3, 4, 10, 40 };
}
int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x;
    // Số phần có trong mảng.
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "nhap gia tri can tim" << endl;
    cin >> x;
    int result = linearSearch(arr, n, x);
    if (result == -1)
        cout << "Khong tim thay " << x
        << " trong mang";
    else
        cout << "Vi tri: " << result;
}