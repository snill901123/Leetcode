class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        long int copy=x,contrast=0;
        while(x!=0){
            contrast=contrast*10 + x%10;
            x/=10;
        }
        return contrast==copy;
    }
};
