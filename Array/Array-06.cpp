// Maximum index Value(with greater value comparioson)
// IP - {34,8,10,3,2,80,30,33,1}
// OP - 6
#include<iostream>
using namespace std;
int main(){
    int arr[] = {34,8,10,3,2,80,30,33,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int count =0;
    int temp=0;
    int max=0;
    int i,j;
    for(i=0;i<n;i++){
        for(j=n-1;j>=i;j--){
            if(arr[i]< arr[j]){
               temp =j-i;
            }
            if(temp>max){
                max=temp;
            }

        }
    }
   cout<<"Max Index :"<<max<<endl;
}
