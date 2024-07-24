#include<iostream>
using namespace std;

    void reverse(int arr[],int n){
        int start=0,end=n-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

    }

    void printArray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout << endl;
    }

int main(){
    int arr[8] = {1,3,5,-4,-10,12,32,49};
    int brr[5] = {2,5,8,12,4};

    reverse(arr,8);
    reverse(brr,5);

    printArray(arr,8);
    printArray(brr,5);


    return 0;
}