class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int len=nums.size();
        for(int i=0;i<len-2;i++){
            if(nums[i]>0){
                break;
            }
            int start=i+1,end=len-1;
            if(i!=0 && nums[i-1]==nums[i]){
                continue;
            }
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==0){
                    ans.push_back({nums[i],nums[start],nums[end]});
                    start++;
                    end--;
                    while(nums[start]==nums[start-1] && start<end){
                        start++;
                    }
                }else if(sum>0){
                    end--;
                }else{
                    start++;
                }
            }
        }
        return ans;
    }
};
