# include <iostream>
# include <math.h>
# define pi 3.1428
using namespace std;

class integ{
	public:
		float a,b,a_rad,b_rad;
		void get_limits()
		{
			cout<<"Enter the upper and lower limits in degrees";
			cin>>b>>a;
            a_rad=a*(pi/180);
            b_rad=b*(pi/180);
		}
		float compute_area()
		{
			float area=(b_rad-a_rad)*sin((a_rad+b_rad)/2);
			return (area);
		}
		float compute_area1()
		{
			float mid=(a_rad+b_rad)/2;
			float area1=(mid-a_rad)*sin((mid+a_rad)/2);
			float area2=(b_rad-mid)*sin((mid+b_rad)/2);
			return (area1+area2);
		}
};

int main(int argc, char const *argv[])
{
	class integ numintrect;
	numintrect.get_limits();
	float val=numintrect.compute_area();
	cout<<" Area under the curve: "<<val<<endl;
	float val1=numintrect.compute_area1();
	cout<<" Area under the curve: "<<val1;
	return 0;
}