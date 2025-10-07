#include <iostream>
#define szo(x) sizeof(x)
int main() {
    int arr[7] = {11, 12, 3, 12, 11, 3, 56};
    int limit = szo(arr)/szo(arr[0]);
    int unique;

    for (int i = 0; i < limit; i++) {
        int count = 0;


        for (int j = 0; j < limit; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }


        if (count == 1) {
            unique = arr[i];
            break;
        }
    }

    cout << "The unique element is: " << unique << endl;
    return 0;
}

