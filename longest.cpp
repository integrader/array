// longest subarray whose sum is divisible by k
#include <bits/stdc++.h>
using namespace std;
int sumarray(int arr[], int n, int k)
{
    int sum = 0, local = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            local = local + arr[j];

            if (local % k == 0)
            {
                sum = max(sum, j - i + 1);
            }
        }
    }
    return sum;
}
int main()
{
    int arr[] = { 2, 7, 6, 1, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
 
    cout << "Length = "
         << sumarray(arr, n, k);
 
    return 0;
}
