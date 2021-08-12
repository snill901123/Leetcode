class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.length();
        int start=0,maxlength=1;
        for(int i=0;i<len-1;i++){
            int left=i,right=i+1;  //pair condition
            while(right<len && left>=0 && s[left]==s[right]){
                left--;
                right++;
            }
            left++;
            right--;
            if(right-left+1>maxlength){
                start=left;
                maxlength=right-left+1;
            }
            left=i-1;     //middle condition
            right=i+1;
            while(right<len && left>=0 && s[left]==s[right]){
                left--;
                right++;
            }
            left++;
            right--;
            if(right-left+1>maxlength){
                start=left;
                maxlength=right-left+1;
            }
        }
        return s.substr(start,maxlength);
    }
};
