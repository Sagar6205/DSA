// Count Pairs with Given Sum
// IP - a[] ={ 1,5,7,-1}, Sum -6
// OP - 2 pair

#include<iostream>
using namespace std;

int main(){
    int a[]= {1,5,7,-1,5};
    int count= 0;
    int n =sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]==6){
               count++;
            }
           
            }
        }
        cout<<"Count : "<<count<<endl;
    }
