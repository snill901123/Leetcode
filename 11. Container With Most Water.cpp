class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0,left=0,right=height.size()-1;
        while(left<right){
            int high=min(height[left],height[right]);
            water=max(water,(right-left)*high);
            height[left]<height[right]?left++:right--;
        }
        return water;
    }
};
