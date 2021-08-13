class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int now=target-nums[i];
            if(mp[now]){
                ans.push_back(mp[now]-1);
                ans.push_back(i);
                break;
            }
            mp[nums[i]]=i+1;
        }
        return ans;
    }
};
