# include <iostream>
using namespace std;

class complex
{
public:
	int r,im;
	void set_data()
	{
		cout<<"Enter real part: ";
		cin>>r;
		cout<<"Enter imaginary part: ";
		cin>>im;
	}
	void disp_data()
	{
		cout<<"Real part: "<<r;
		cout<<"imaginary part: "<<im;
	}


};

int main(int argc, char const *argv[])
{
	class complex c1,c2,c3;
	c1.set_data();
	c2.set_data();
	c3.r=c1.r+c2.r;
	c3.im=c1.im+c2.im;
	c3.disp_data();	
	return 0;
}