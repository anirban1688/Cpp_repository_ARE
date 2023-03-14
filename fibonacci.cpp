#include<iostream>
using namespace std;
int main()
{
	int n, init1=0, init2=1, sum;	
	cout<<" enter number of elements required in the series: ";
	cin>>n;
	cout<<" "<<init1<<" "<<init2;
	if(n>2)
	{
		for(int i=3;i<=n;i++)
		{
			sum=init1+init2;
			init1=init2;
			init2=sum;
			cout<<" "<<sum;
		}
	}

	cout<<"\n \n";
	return 0;
}