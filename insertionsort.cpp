#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"enter number : ";
    cin>>n;

    int arr[n];
    cout<<"enter arr :";
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(arr[j-1]>arr[j])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {

        cout<<arr[i];
    }
}
