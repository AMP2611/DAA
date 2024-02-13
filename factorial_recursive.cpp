#include<iostream>
using namespace std;
int c=0;
int fact (int n)
{
c=c+1;
if(n==0)
{
   c=c+1;
   return 1;
   }
   else
   {
   c=c+1;
   return fact(n-1)*n;
}
}
int main()
{
int n;
cout<<"22CE080_ANJALI PARMAR"<<endl;
cout<<"enter the number :";
cin>>n;
cout<<"factorial : "<<fact(n)<<endl;
cout<<"counter : "<<c;

}
