#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n), cumSum(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Compute cumulative sum
    cumSum[0] = arr[0];
    for(int i = 1; i < n; ++i) {
        cumSum[i] = cumSum[i - 1] + arr[i];
    }

    // Output result
    cout << "Cumulative Sum Array: ";
    for(int i = 0; i < n; ++i) {
        cout << cumSum[i] << " ";
    }

    return 0;
}