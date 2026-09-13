#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;

    int a[100];
    cout << "Nhập các phần tử:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }

    cout << "Phần tử lớn nhất là: " << maxVal << endl;
    return 0;
}