# include <iostream>
using namespace std;

class matrix{
protected:
	int a[3][3],i,j,k;
public:
	matrix()
	{
		cout<< " Enter the array elements: ";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				cin>>a[i][j];
		}
	}

	matrix(int zero)
	{
		
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				a[i][j]=0;
		}
	}

	void sum (matrix mat1, matrix mat2)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				a[i][j]=mat1.a[i][j] + mat2.a[i][j];
		}
	}

	matrix operator+(matrix mat2) // Operator overloading
	{
		matrix m(0);
    		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				m.a[i][j]=a[i][j] + mat2.a[i][j];
		}

		return(m);
	}

	void mult (matrix mat1, matrix mat2)
	{
		int sum=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				sum=0;
				for(k=0;k<3;k++)
				{
					sum = sum + (mat1.a[i][k]*mat2.a[k][j]);
				}

				a[i][j]=sum;				
			}
			
			
		}
	}

	void display()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
};

class matrix_invariants : public matrix{
public:
	int sum=0;
	int trace()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==j)
				sum=sum+a[i][j];
			}
				
		}
	
	return(sum);
}
};


int main()
{
	matrix m1, m2, m3(0), m4(0), m5(0);
	matrix_invariants tr;
	m3.sum(m1,m2);
	m3.display();
	cout<<endl;
	m4.mult(m1,m2);
	m4.display();
	m5 = m1 + m2;
	m5.display();
	//int trace1 = tr.trace();
	tr.mult(m1,m1);
	tr.display();
	int trace2 = tr.trace();
	//cout<<endl<<trace1<<endl;
	cout<<endl<<trace2<<endl;
}
