#include <bits/stdc++.h>
using namespace std;
struct Query
{
    int L;
    int R;
};
void printQuerySums(int a[], int n, Query q[], int m)
{
    // One by one compute sum of all queries
    for (int i=0; i<m; i++)
    {
        // Left and right boundaries of current range
        int L = q[i].L, R = q[i].R;
 
        // Compute sum of current query range
        int sum = 0;
        for (int j=L; j<=R; j++)
            sum += a[j];
 
        // Print sum of current query range
        cout << "Sum of [" << L << ", "
            << R << "] is "  << sum << endl;
    }
}