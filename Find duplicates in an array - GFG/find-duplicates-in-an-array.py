class Solution:
    def duplicates(self, arr, n): 
    	# code here
    	    mydict={}
    	    
    	    res_list=[]
    	    
    	    for num in arr:
    	        if num not in mydict:
    	            mydict[num]=1
    	        else:
    	            mydict[num]=mydict[num]+1
    	   
    	    for key,value in mydict.items():
    	        if value>1:
    	            res_list.append(key)
    	            
    	    return [-1] if not res_list else sorted(res_list)

#{ 
#  Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends