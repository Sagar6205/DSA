// Max number in an Array (Score-100)

#include<iostream>
#include<array>
using namespace std;
// GitHub Test
int main(){

    int a[5]= {2,4,35,1,17};
    int temp= a[0];
    for(int i=1; i<5; i++)
    {
        if(temp<a[i]){
            temp=a[i];
        }

    }
   cout<<"Max Number is "<<temp<<endl;
   
    }
    
