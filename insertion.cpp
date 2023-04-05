#include <bits/stdc++.h>
using namespace std;
int insertion(int arr[],int index,int capacity,int size,int element){
    if (size>=capacity)
    {
        return -1;
    }
    
    for (int i=size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    
    return 1;
    
}
int main(){
    int arr[100]={4,5,234,435,234,32,6};
    int index=3,size=7;
    int element=9;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    insertion(arr,index,100,size,element);
    size+=1;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    

}