 #include <iostream>
 using namespace std;
 int c =0;
 int hcf(int n1, int n2)
 {
 c++;
 if (n2 != 0)

 return hcf(n2, n1 % n2);
 else
 return n1;
 }
 int main()
 {
 int n1, n2;
 cout<<"developed by 22CE028 Roshani Dholariya"<<endl;
 cout << "Enter two positive integers: ";
 cin >> n1 >> n2;
 cout << "GCD of given number is: " << hcf(n1, n2);
 cout<<endl;
 cout<<"Number of Instruction is : "<<c;
 return 0;
 }
