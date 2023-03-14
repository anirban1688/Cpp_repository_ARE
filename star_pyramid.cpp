#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<" Enter the number of rows required ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(int j=n-i;j>0;j--)
			cout<<" ";

		for(int j=1;j<=(2*i)-1;j++)
			cout<<"*";

		cout<<"\n";
	}

	cout<<"\n";
}