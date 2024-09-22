#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    int size = v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
}
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    print(v);
}