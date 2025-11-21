#include <iostream>
#include <vector>
#define szo(x) sizeof(x)

using namespace std;

int interSection(int arr[], int arr2[], int size1, int size2) {
    int counter = 0;
    int same[100];
    vector<int> same2;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr[i] == arr2[j]) {
                same[counter++] = arr[i];
                same2.push_back(arr[i]);
                break;
            }
        }
    }

    if (counter == 0) {
        cout << "No elements found!" << endl;
    } else {
        cout << "Elements intersected: "<< endl;
        for (int i = 0; i < counter; i++) {
            cout << same[i] << " "<<endl;
        }
        cout << endl;
        cout << "Elements intersected: "<< endl;
        for (int i = 0; i < counter; i++) {
            cout <<"vector elements:"<<same2[i] <<endl;
        }

    }

    return counter;
}

int main() {
    int arr[] = {1, 25, 53, 55, 7, 23};
    int arr2[] = {0, 1, 2, 3, 10, 53, 23};

    int size1 = szo(arr) / szo(arr[0]);
    int size2 = szo(arr2) / szo(arr2[0]);

    interSection(arr, arr2, size1, size2);

    return 0;
}

