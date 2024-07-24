#include<iostream>
using namespace std;

void Sum(int arr[],int size, int newsum = 0){
    for(int i=0; i<size; i++){
        
        int sum = arr[i];
       
         newsum = newsum + sum;
   
    }
    
     cout<<newsum<<endl;

}

int main(){
    int arr[10] = {1,2,4,6,7,8,90,12,4,5};
    Sum(arr,9);
}