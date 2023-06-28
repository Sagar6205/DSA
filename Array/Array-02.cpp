// Find the missing integer (Score-200)
// IP - {1,2,5,6,4}
// OP - 3
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum1=0,sum2;

    for (int i = 0; i < n; i++)
    {
       sum1=sum1+arr[i];
    }
    n=n+1;
    sum2 = (n*(n+1))/2;

    cout<<"Missing Number is : "<<sum2-sum1<<endl;
}


// (n*(n+1))/2
//