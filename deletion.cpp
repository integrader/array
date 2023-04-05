#include <bits/stdc++.h>
using namespace std;
int deletion(int arr[],int size,int index){
    for (int i = index+1; i < size; i++)
    {
        arr[i-1]=arr[i];
    }
    return 1;
    
}
int main(){
    int arr[15]={23,3,45,4,54635,54};
    int size=6,index=4;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    deletion(arr,6,4);
    size-=1;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    return 0;
    
    
}