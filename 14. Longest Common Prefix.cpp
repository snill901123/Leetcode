class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int maxCommonPrefixIndex = 0;
        for(int i=1; i<strs.size(); i++){
            maxCommonPrefixIndex = 0;
            for(int j=0; j<ans.size(); j++){
                if(ans[j] == strs[i][j])
                    maxCommonPrefixIndex++;
                else
                    break;
            }
            ans = ans.substr(0, maxCommonPrefixIndex);
            //�ۦP���Y�u�i��V�ӶV�u 
        }
        return ans;
    }
};
