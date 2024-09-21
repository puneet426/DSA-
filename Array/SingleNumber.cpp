#include<iostream>
using namespace std;

int findUniqueNumber(int arr[],int n){
int ans = 0;
for(int i = 0; i < n; i++){
    ans = ans^arr[i];
}
return ans;
}



int main(){

    int arr[] = {1,2,4,2,1,6,3,6,7,4,3};
    int size = 11;

    int ans = findUniqueNumber(arr,size);
    cout<<"Unique Number is = "<< ans <<endl;

    return 0;
}