#include<iostream>
using namespace std;

int b_s(int arr[], int start , int end , int key)
{


    while(start<=end)
    {
        int mid;
       mid=(start+end)/2;
        if(arr[mid]==key)
        {
           return mid;

        }
        else if(arr[mid]>key)
        {

            end=mid-1;

        }else
        {

            start=mid+1;

        }

    }

    return -1;
}
int main()
{

    int n,key ;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
    cout<<"enter arr : ";
    for(int i=0; i<n; i++)
    {

        cin>>arr[i];

    }
    cout<<"enter key : ";
    cin>>key;
    int result=b_s(arr,0,n-1,key);
    if(result != -1)
    {

        cout<<"element : "<<result;
    }else{
    cout<<"not found"<<endl;
    }

}#include<iostream>
using namespace std;

int b_s(int arr[], int start , int end , int key)
{


    while(start<=end)
    {
        int mid;
       mid=(start+end)/2;
        if(arr[mid]==key)
        {
           return mid;

        }
        else if(arr[mid]>key)
        {

            end=mid-1;

        }else
        {

            start=mid+1;

        }

    }

    return -1;
}
int main()
{

    int n,key ;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
    cout<<"enter arr : ";
    for(int i=0; i<n; i++)
    {

        cin>>arr[i];

    }
    cout<<"enter key : ";
    cin>>key;
    int result=b_s(arr,0,n-1,key);
    if(result != -1)
    {

        cout<<"element : "<<result;
    }else{
    cout<<"not found"<<endl;
    }

}
