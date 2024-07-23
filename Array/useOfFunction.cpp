#include<iostream>
using namespace std;

void printArray(int arr[], int size){
for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    printArray(arr,5);

    int arrsize = sizeof(arr)/sizeof(int);
    cout<<endl <<"size of Array is "<< arrsize<<endl;

    char ch[5] = {'a' ,'b','c'};
    cout<< ch<<"  " << endl;


    return 0;
}