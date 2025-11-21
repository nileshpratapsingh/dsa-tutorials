#include <iostream>
#define szo(x) sizeof(x)

using namespace std;

int main() {
    int arr[7] = {11, 12, 3, 12, 11, 3, 56};
    int limit = szo(arr)/szo(arr[0]);

    int unique = 0;
    for (int i = 0; i < limit; i++) {
        unique ^= arr[i];
    }

    cout << "The unique element is: " << unique << endl;
    return 0;
}
