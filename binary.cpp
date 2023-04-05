#include <iostream>
using namespace std;
int binarysaerch(int arr[], int n, int key)
{
    int beg = 0, end = n;

    while (beg <= end)
    {
        int mid = (end + beg) / 2;
        if (arr[mid] == key)
        {
            return 1;
        }
        else if (arr[mid] < key)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;
    cout<<binarysaerch(arr,n,key);
    return 0;
}
