// to find maximum sum of subarray
#include<bits/stdc++.h>
using namespace std;
int maximumarray(int arr[],int n){
    int sum=0;
    int sum_till_now=0;
    for (int i = 0; i < n; i++)
    {
        sum_till_now+=arr[i];
        if (sum_till_now>sum)
        {
            sum=sum_till_now;
        }
        if (sum_till_now<0)
        {
            sum_till_now=0;      // removing the negative sum
        }
        
        
    }
    return sum;

    
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximumarray(arr,n);
    return 0;
}