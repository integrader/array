//programe for chocolate distribution problem
#include<bits/stdc++.h>
using namespace std;
int chocolatestory(int arr[],int n,int m){
    int min_diff=INT_MAX;
    if (n==0||m==0)
    {
        return 0;
    }
    
    sort(arr,arr+n);
    for (int i = 0; m-1+i < n; i++)
    {
        if(arr[m+i-1]-arr[i]<min_diff)
        {
            min_diff=arr[m+i-1]-arr[i];
        }
    }
    return min_diff;
    
}
int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << chocolatestory(arr, n, m);
    return 0;
}


