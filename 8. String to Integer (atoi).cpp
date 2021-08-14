class Solution {
public:
    int myAtoi(string s) {
        long int ans=0;
        int i=0,sign=1;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-'){
                sign=0;
            }
            i++;
        }
        while(s[i]>='0' && s[i]<='9'){
            if(ans*10+s[i]-'0'>INT_MAX){
                ans = sign? INT_MAX : INT_MIN;
                return ans;
            }
            ans = ans*10 + s[i++]-'0';
        }
        return sign?ans:-ans;
    }
};
