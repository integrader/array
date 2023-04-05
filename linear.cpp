#include <iostream>
using namespace std;
int main()
{
    int key;
    cin >> key;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] ==key)
        {
            cout << "present at position:" << i;
        }
        else
        {
            cout<<"not pt";
        }
       
    }
     
    return 0;
}