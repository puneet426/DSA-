#include<iostream>
using namespace std;
int main() {
    int n,i,j,count=0;
    cout<<"enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
          count=count+1; 
          char ch='A'+count-1;
          cout<<ch<<" "; 
        }
       cout<<endl;
    }
}