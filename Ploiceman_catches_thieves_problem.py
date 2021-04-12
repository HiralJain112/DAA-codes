# program to find maximum number of thieves caught in policeman catches thieves problem

def PoliceThiefFunc(arr, length, k): 
	i = left = right = 0
	
	result = 0
	thief_lst = [] 
	police_lst = [] 

	while i < length: 
		if arr[i] == 'P': 
			police_lst.append(i) 
		elif arr[i] == 'T': 
			thief_lst.append(i) 
		i += 1
 
	while left < len(thief_lst) and right < len(police_lst): 
		
		if (abs( thief_lst[left] - police_lst[right] ) <= k): 
			result += 1
			left += 1
			right += 1
			
		elif thief_lst[left] < police_lst[right]: 
			left += 1
		else: 
			right += 1

	return result 


if __name__=='__main__':  

	arr = ['P', 'T', 'P', 'T', 'T', 'P'] 
	k = 2
	print("Maximum no. of thieves caught:")
	print(PoliceThiefFunc(arr, len(arr), k) )


