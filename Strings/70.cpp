class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i=0;
	    int n = S.length()-1;
	    while(i<n)
	    {
	        if(S[i]==S[n]){
	            i++;
	            n--;
	        }
	        else 
	        {
	            return 0;
	        }
	    }
	    return 1;
	}

};