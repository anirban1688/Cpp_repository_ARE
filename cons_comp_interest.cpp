# include <iostream>
# include <math.h>
using namespace std;

class FD{
private:
	float P,r,t,A;

public:


	FD(float principal, float rate, float time)
	{
		P=principal;
		r=rate;
		t=time;
		A=P*pow((1+(r/100)),t);

	}

	void display_FD()
	{
		cout<<" Incurred amount: "<<A<<endl;
	}
};


int main()
{
	
	float principal, rate, time;
	cout<<" Enter principal, interest rate and time: ";
	cin>>principal>>rate>>time;
	FD amount(principal,rate,time);
	amount.display_FD();

	return 0;
}