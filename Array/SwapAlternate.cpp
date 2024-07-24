#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {5,6,7,8,9,2,3,4};
    int odd[5] = {1,2,3,4,5};

    swapAlternate(even , 8);
    printArray(even, 8);

    swapAlternate(odd , 5);
    printArray(odd, 5);
    return 0;
}