class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int len = s.length();
        int ans=mp[s[0]];
        for(int i=1;i<len;i++){
            if((s[i-1]=='I' && (s[i]=='V' || s[i]=='X')) || (s[i-1]=='X' && (s[i]=='L' || s[i]=='C')) ||
                (s[i-1]=='C' && (s[i]=='D' || s[i]=='M'))){
                ans-=2*mp[s[i-1]];
                ans+=mp[s[i]];
            }else{
                ans+=mp[s[i]];
            }
        }
        return ans;
    }
};
