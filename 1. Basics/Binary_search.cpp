#include<iostream>
using namespace std;

int search(int *a, int size, int key)
{
	int beg = 0;
	int end = size-1;
	int mid;
	
	while(beg < end) {
		
		mid = (beg + end)/2;
	
		if (key == a[mid]) {
			return mid;
		}
		else
		{
			if(key > a[mid]) {
				beg = mid + 1;
			}

			if(key < a[mid]) {
				end = mid - 1;
			}			
		}		
	}	
}

int main()
{
	int a[] = {1,3,5,7,8};
	
	int size = 5;
	int key = 7;
	
	int x = search(a, size, key);
	
	cout << "Element found at " << x + 1;
	
	return 0;
}
