
selection(a)
{
	
	for i<-0 to i < (a.lenth - 1)
		min = i
		
		for j<-min+1 to j < a.length
			if a[min] > a[j]
				min = j
		
		swap ( a[i] , a[min] )		  


}
