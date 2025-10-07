#include <iostream>
#define szo(x) sizeof(x)

using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

void swapArray(int arr[],int n){
    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 1; i += 2 )
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    else
    {
        for (int i = 0; i < n - 2; i += 2)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[6] = {25, 56, 78, 12, 89, 22};

    int n = szo(arr) / szo(arr[0]);

    cout <<"The size of array is:"<<sizeof(arr)<<"\n"<<"The size of element is:"<<sizeof(arr[0])<<endl;
 
    swapArray(arr,n);
 
    printArray(arr,n);

    return 0;
}
