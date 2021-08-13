class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        int len=s.length();
        int ans=0;
        int hashmap[128]={0};
        while(right<len){
            hashmap[s[right]]++;
            while(hashmap[s[right]]==2){
                hashmap[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};
