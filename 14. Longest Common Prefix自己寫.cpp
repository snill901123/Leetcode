class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int now=0;
        bool flag=0;
        char ch=strs[0][0];
        string ans="";
        while(now<strs[0].length()){
            for(int i=0;i<strs.size();i++){
                if(ch!=strs[i][now]){
                    flag=1;
                    break;
                }
            }
            if(flag){
                break;
            }
            ans+=strs[0][now];
            now++;
            ch=strs[0][now];
        }
        return ans;
    }
};
