# include <iostream>
using namespace std;

class B{
	public:
		int b;
		void show()
		{
			cout<<"b = "<<b<<endl;
		}

};

class D: public B{
	public:
		int d;
		void show()
		{
			cout<<"b = "<<b<<endl;
			cout<<"d = "<<d<<endl;
		}

};

int main()
{
	class B b1;
	class B *bptr;
	class D d1;
	class D *dptr;
	bptr=&b1;
	dptr=&d1;

	bptr->b=100;
	cout<<" bptr points to the base class object "<<endl;
	bptr->show();

	bptr=&d1;
	cout<<" bptr now points to the derived object"<<endl;
	bptr->b= 200;
	bptr->show();

	cout<<" dptr points to the derived class object "<<endl;
	dptr->d=300;
	dptr->show();

	cout<<" Modifying the derived class data using the base class pointer"<<endl;
	((D*)bptr)->d=400;
	((D*)bptr)->show();


}
