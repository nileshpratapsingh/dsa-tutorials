#include <iostream>

using namespace std;

int findUnique(int *arr,int size){
    int unique;
    for (int i = 0; i < size ; i++) {
        unique ^= arr[i];
    }
    cout<<"The unique element is:"<<unique<<endl;
    return 0;

}
int main(){
    int arr[5]={1,2,2,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    findUnique(arr,size);
    return 0;
}
