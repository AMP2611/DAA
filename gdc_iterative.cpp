#include<iostream>
using namespace std;

int main()
{
int ans,c=0;
int a,b;
cout<<"22CE080_ANJALI PARMAR"<<endl;
cout<<"enter the number : ";
cin>>a>>b;
c=c+2;
for(int i=a;i>=1;i--)
{
c=c+2;
if(a%i==0 && b%i==0)
{
c++;
 cout<<"GCD : "<<i;
 break;
}
}
cout<<"\nnumber of counter : "<<c;
}
