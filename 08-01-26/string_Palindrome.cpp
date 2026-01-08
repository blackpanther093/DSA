// https://takeuforward.org/plus/dsa/problems/check-if-string-is-palindrome-or-not-?tab=description
class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
			int n=s.size();
			for(int i=0; i<n/2; i++)
				if(s[i]!=s[n-i-1]) return false;
			return true;
		}
};