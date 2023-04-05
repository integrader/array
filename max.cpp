#include <iostream>
using namespace std;
int main(){
    int max=INT16_MIN;
    int ara[7]={546, 454, 897 ,8463, 6, 56,8};
    for (int i = 0; i < 7; i++)
    {
        if (ara[i]>max)
        {
            max=ara[i];
        }
        
    }
    cout<<max;
    return 0;
    

}