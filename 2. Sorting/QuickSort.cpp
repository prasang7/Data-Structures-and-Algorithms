#include<iostream>
using namespace std;
int Partition(int a[], int beg, int end)   //Function to Find Pivot Point
{
	int p=beg, pivot=a[beg], loc;
	for(loc=beg+1;loc<=end;loc++)
	{
		if(pivot>a[loc])
		{
			a[p]=a[loc];
			a[loc]=a[p+1];
			a[p+1]=pivot;
			p=p+1;
		}
	}
	return p;
}
void QuickSort(int a[], int beg, int end)
{
	if(beg < end)
	{
		int p = Partition(a,beg,end);         
		QuickSort(a,beg,p-1);               
		QuickSort(a,p+1,end);			    
	}
}
int main()
{
	int beg,end;
	int a[] = {2,4,8,1,5,2,6};
	beg = 1;end = 7;
	QuickSort(a,beg,end);                        	  
	cout<<"\nAfter Sorting : \n";
	for(int i=1;i<=7;i++)
		cout<<a[i]<<endl;
	return 0;
}
