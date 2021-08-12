class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.length();
        string ans;
        int start=0,maxlength=1;
        for(int i=0;i<len;i++){
            for(int j=1;j<=len-i;j++){
                string temp=s.substr(i,j);
                if(isPalindrome(temp)&&(j>maxlength)){
                    start=i;
                    maxlength=j;
                }
            }
        }
        return s.substr(start,maxlength);
    }
    bool isPalindrome(string str){
        bool flag=true;
        int len=str.length();
        int i=0;
        while(i<len/2){
            if(str[i]!=str[len-i-1]){
                flag=false;
                break;
            }
            i++;
        }
        return flag;
    }
};
