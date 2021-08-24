class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans,difMax=INT_MAX,len=nums.size();
        for(int i=0;i<len-2;i++){
            int start=i+1,end=len-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                int dif=abs(target-sum);
                if(dif<difMax){
                    ans=sum;
                    difMax=dif;
                }
                if(sum>target){
                    end--;
                }else if(sum<target){
                    start++;
                }else{          //代表sum=target,也就是dif=0
                    return ans;
                }
            }
        }
        return ans;
    }
};

