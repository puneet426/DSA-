#include<iostream>
using namespace std;


int main(){
    //declare 
    int number[15];
    cout<<"value at 0 index "<<  number[0]<<endl;  //the value is random here
    cout<< "Everything is fine"<<endl;

    // initialise an array
    int second[5] = {3,4,5,6,7};
    // accesing an element
    cout<<"value at 2 index is "<<  second[2]<<endl;  //the value

    int third[15] = {3,4,5,6,7};
    int n=15;
    // print the array
    for(int i=0; i<n; i++){
        cout<<third[i]<<" "<<endl;  //when we give lessless values than initialisation then all other values becomes 0
    }
// initialising all location with 0

    int fourth[15] = {0};
    int m=15;
    // print the array
    for(int i=0; i<m; i++){
        cout<<fourth[i]<<" "<<endl; 
    }

// we use  std::fill_n(fifth,15,1); to initialising all location with given number
     int fifth[15] = {1};
     std::fill_n(fifth,15,1);
         m=15;
    // print the array
    for(int i=0; i<m; i++){
        cout<<fifth[i]<<" ";
    }

    return 0;
}