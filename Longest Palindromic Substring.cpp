class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.length();
        int start=0,maxlength=1;
        for(int i=0;i<len-1;i++){
            int low=i,high=i+1;  //pair condition
            while(high<len && low>=0 && s[low]==s[high]){
                low--;
                high++;
            }
            low++;
            high--;
            if(high-low+1>maxlength){
                start=low;
                maxlength=high-low+1;
            }
            low=i-1;     //middle condition
            high=i+1;
            while(high<len && low>=0 && s[low]==s[high]){
                low--;
                high++;
            }
            low++;
            high--;
            if(high-low+1>maxlength){
                start=low;
                maxlength=high-low+1;
            }
        }
        return s.substr(start,maxlength);
    }
};
