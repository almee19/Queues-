#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarySearch(arr, x, l, mid - 1);
        }
        return binarySearch(arr, x, mid + 1, r);
    }
    return -1; 
}

int main() {
    int sortedArr[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int target;
     cout<<"\n enter a number";
     cin>>target;
    int result = binarySearch(sortedArr, target, 0, sizeof(sortedArr) / sizeof(sortedArr[0]) - 1);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
