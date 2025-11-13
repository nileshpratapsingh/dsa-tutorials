#include <iostream>
#define szo(x) sizeof(x)

using namespace std;

int findDuplicate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main() {
    int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,6};
    int size = szo(arr) / szo(arr[0]);

    int result = findDuplicate(arr, size);
    if (result != -1)
        cout << "The duplicate element is: " << result << endl;
    else
        cout << "No duplicate found!" << endl;

    return 0;
}

