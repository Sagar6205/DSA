// Find Duplicates in an array (Score-300)
// Ip - {2,3,4,2,5,4}
// OP - 2,4
#include<iostream>
using namespace std;

int main(){
    int a[]= {2,3,4,2,5,4};
    for(int i=0; i<6;i++){
        for(int j=i+1; j<6; j++){
            if(a[i]==a[j]){
                cout<<a[j]<<endl;
            }
        }
    }
}
