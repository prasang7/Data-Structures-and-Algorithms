

Quicksort(a, low, high)
{
	if low < high
		x = partition(a, low, high)
		Quicksort(a,low,x)
		Quicksort(a,x+1,high)
}

int partition(int* a, int low, int high)
{
  int i, j, pivot, temp;
  pivot = a[low];
  i = low;
  j = high;
  
  while(1)
  {
  	while(a[i] < pivot && a[i] != pivot)
   		i++;
   	while(a[j] > pivot && a[j] != pivot)
   		j--;
   	if(i < j)
   	{
    	temp = a[i];
    	a[i] = a[j];
    	a[j] = temp;
   	}
   	else
   	{
    	return j;
   	}


  }



}
