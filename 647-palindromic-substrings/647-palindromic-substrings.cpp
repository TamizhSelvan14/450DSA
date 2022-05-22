class Solution {
public:
    int countSubstrings(string s) {
        
        int n=size(s);
        int count=n;
        
        //odd length
        // if(n%2!=0){
         
        for(int i=1,l=0,r=2;i<n;i++,l=i-1,r=i+1){
            
            while(l>=0 and r<n and s[l]==s[r])
            {
              l--;
            r++;
              count++;
              
            } 
            }   
        // }else{
            
        for(int i=1,l=0,r=1;i<n;i++,l=i-1,r=i){
            
            while(l>=0 and r<n and s[l]==s[r])
            {
              l--;
            r++;
              count++;
              
            } 
        }
            
        // }
        
        
        
        return count;
    }
};