

insertion(a)
{
	for i<-0 to a.lenth
		key = a[i]
		j = i - 1
		
		while j>=0 and a[j] > key
			a[j+1] <- a[j]
			j <- j - 1
		end while
				
		a[j+1] <- key			
		i <- i + 1
	
	end for		
}
