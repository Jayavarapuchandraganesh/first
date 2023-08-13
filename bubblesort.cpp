#include<iostream.h>
using namespace std;
int main()
{
    int arr[5]={5,10,4,6,1};
    for(int i=0;i<arr.length-1;i++)
    {
        for(int j=0; j<arr.length-i-1)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<arr.length;i++)
    {
        cout<<arr[i];
    }
}      