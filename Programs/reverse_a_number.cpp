#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the number";
	int n,a=0,r;
	cin>>n;
	while(n>0)
	{
	r=n%10;
	a=a*10+r;
	n=n/10;
	}
	cout<<"Reverse of number is "<<a;
}
