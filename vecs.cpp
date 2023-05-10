# include <iostream>
using namespace std;

class vectops{
private:
	float x,y,z;
public:

	void get_Vector()
	{
		cout <<" Enter the components: "<< endl;
		cin>>x>>y>>z;
	}

	void display_vector()
	{
		cout<<x<<" "<<y<<" "<<z<<endl;
	}

	void add_vectors(vectops v1, vectops v2)
	{
		x= v1.x + v2.x;
		y= v1.y + v2.y;
		z= v1.z + v2.z;
	}

	void cross_product(vectops v1, vectops v2)
	{
		x= v1.y*v2.z - v2.y*v1.z;
		y= -(v1.x*v2.z - v2.x*v1.z);
		z= v1.x*v2.y - v2.x*v1.y;
	}
};

int main()
{
	vectops v1,v2,v3,v4;
	v1.get_Vector();
	v2.get_Vector();
	v3.add_vectors(v1,v2);
	v3.display_vector();
	v4.cross_product(v1,v2);
	v4.display_vector();


	return 0;

}