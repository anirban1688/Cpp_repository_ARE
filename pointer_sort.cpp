# include <iostream>
using namespace std;

class sort{
private:
	int arr[5]={7,2,13,4,8};	
	int *ptr = &arr[0];
public:
	int i,j,temp;
	void disp_arr()
	{
		
		cout<<endl<<ptr<<" "<<*ptr<<endl;
		for(i=0;i<5;i++)
			cout<<*(ptr+i)<<" ";
		cout<<endl;
	}
	void sort_func()
	{
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(*(ptr+i)>*(ptr+j))
				{
					temp=*(ptr+i);
					*(ptr+i)=*(ptr+j);
					*(ptr+j)=temp;
				}
						
			}
		}
	}

	int binary_search(int x)
	{
		int beg=0, end=(sizeof(arr)/sizeof(int))-1;
		//cout<<endl<<end<<endl;
		while(beg<=end)
		{
			int mid = (beg+end)/2;
			//cout<<mid<<" "<<arr[mid]<<endl;
			if(arr[mid]==x)
			{
				//cout<< endl << mid << endl;
				return(mid);
			}
			else 
			{
				if(arr[mid]<x)
					beg=mid+1;
				else
					end=mid-1;
			}

		}
		return(-1);
	}

	int binary_search_pointer(int x)
	{
		int beg=0, end=(sizeof(arr)/sizeof(int))-1;
		//cout<<endl<<end<<endl;
		while(beg<=end)
		{
			int mid = (beg+end)/2;
			//cout<<mid<<" "<<arr[mid]<<endl;
			if(*(ptr+mid)==x)
			{
				cout<< endl << mid << endl;
				return(mid);
			}
			else 
			{
				if(*(ptr+mid)<x)
					beg=mid+1;
				else
					end=mid-1;
			}

		}
		return(-1);
	}
};

int main()
{
	class sort s1;
	int val,x,val_ptr;
	s1.disp_arr();
	s1.sort_func();
	s1.disp_arr();
	cout<< " Enter element to be searched: ";
	cin>>x;
	val=s1.binary_search(x);	
	cout<<endl<<val<<endl;
	cout<< " Enter element to be searched: ";
	cin>>x;
	val_ptr=s1.binary_search_pointer(x);
	cout<<endl<<val_ptr<<endl;
	return 0;
}
