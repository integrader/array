// reversing a given array
#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[]={5,65,2,24,9,84,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;
    while (start<=end)
    {
        int temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        start++;end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
    
}