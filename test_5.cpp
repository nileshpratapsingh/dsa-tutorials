#include <iostream>
#define szo(x) sizeof(x)
using namespace std;

int duplicateElements(int arr[], int size) {
    int elements[100]; 
    int counter = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {  
            if (arr[i] == arr[j]) {
                bool alreadyAdded = false;

                for (int k = 0; k < counter; k++) {
                    if (elements[k] == arr[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }

                if (!alreadyAdded) {
                    elements[counter++] = arr[i];
                }
            }
        }
    }

    if (counter == 0) {
        cout << "No duplicates found.\n";
    } else {
        cout << "Duplicate elements: ";
        for (int i = 0; i < counter; i++)
            cout << elements[i] << " ";
        cout << endl;
    }

    return counter;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5, 1};
    int size = szo(arr) / szo(arr[0]);

    duplicateElements(arr, size);
    return 0;
}

