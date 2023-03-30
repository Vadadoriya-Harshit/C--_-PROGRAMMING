#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 2, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_num = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i];
        }
    }

    cout << "The largest number in the array is: " << max_num << endl;

    return 0;
}
