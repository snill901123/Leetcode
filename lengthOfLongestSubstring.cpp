class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int ans = 0, len = s.length();
        int hashmap[256];
        memset(hashmap, 0, sizeof(hashmap));
        while(right < len) {
            hashmap[s[right]]++;
            while(hashmap[s[right]] == 2) {
                hashmap[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};
