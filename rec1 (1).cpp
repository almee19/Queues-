#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    int tickets[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int size = sizeof(tickets) / sizeof(tickets[0]);
    
    cout << "Enter this week's winning number (5 digits): ";
    int winningNumber;
    cin >> winningNumber;

    if (linearSearch(tickets, size, winningNumber)) {
        cout << "Congratulations! You have a winning ticket!" << endl;
    } else {
        cout << "Sorry, the number is invalid." << endl;
    }

    return 0;
}
