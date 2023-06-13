# include <iostream>
using namespace std;

class sample{
	private:
	int a,b;
	public:
		void set_val()
		{
			a=20;
			b=40;
		}
		friend float mean(sample s);
};

float mean (sample s)
{
	return ((s.a + s.b)/2);
}

int main()
{
	sample X;
	X.set_val();
	cout<<endl<<"Mean value"<<mean(X)<<endl;
}