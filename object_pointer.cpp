# include <iostream>
using namespace std;


class purchase{
private:
	int items,price;

public:
	void setdata(int items, int price)
	{
		this->items=items;
		this->price=price;
	}

	void total_cost()
	{
		cout<<"Total cost = :"<<items*price<<endl;
	}
};

int main()
{
	purchase p;
	purchase *q;

	q=&p;

	int i, n, price, items;
    
    cout<< " Using object "<<endl;
	p.setdata(5,10);
	p.total_cost();

	cout<< " Using object pointers"<<endl;
	q->setdata(5,10);
    q->total_cost(); 

    // creating an array of objects using pointers

    cout<<" Enter number of items: "<<endl;
    cin>>n;

    purchase *p1 = new purchase[n];

    for(i=0;i<n;i++)
    {
    	cout<<" Enter number of items and price: ";
    	cin>>items>>price;
    	p1->setdata(items,price);
    	p1->total_cost();
    	p1++;
    }
}
