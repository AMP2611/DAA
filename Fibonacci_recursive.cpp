#include<iostream>
using namespace std;
int c=0;
 int fib(int n)
 {
 c=c+1;
 if(n==0||n==1)
 {
 c=c+1;
 return n;
 }
 else
 {
 c=c+1;
 return  fib(n-1)+fib(n-2);
 }
 }
int main()
{
int n,i;
cout<<"22CE080_ANJALI PARMAR"<<endl;
cout<<"enter the number : ";
cin>>n;

cout<<"fib series : ";
c=c+1;
while(i<n)
{
cout<< " "<<fib(i);
c=c+1;
i++;
}
cout<<"\ncounter : "<<c ;
return 0;
}
