#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the number : ";
cin>>n;
int c=0;
int sum=0, a=0,b=1;
c=c+5;
for(int i=0;i<n;i++)
{
cout<<a<<" ";
sum=a+b;
a=b;
b=sum;
c=c+5;
}

cout<<"counter : "<<c;
}
