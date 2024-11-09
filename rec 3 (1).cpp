#include <iostream>
using namespace std;

bool recursiveLinearSearch(int arr[], int x, int index, int size) {
    if (index >= size) {
        return false; 
    }
    if (arr[index] == x) {
        return true; 
    }
    return recursiveLinearSearch(arr, x, index + 1, size);
}

int main() {
    int arr[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int target;
    cout<<"\n enter a number";
     cin>>target;
    
    bool found = recursiveLinearSearch(arr, target, 0, sizeof(arr) / sizeof(arr[0]));
    
    if (found) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
