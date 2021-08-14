class Solution {
public:
    string convert(string s, int n) {
        int down = 2*n-2;
        int up = 0;
        
        if(n == 1)
            return s;
        
        string ans = "";
        
        for(int i=0;i<n;i++){
            int j=i;
            bool flag = 0;
            while(j<s.length()){
                if(flag){ //up
                    if(up>0){
                        ans += s.at(j);
                        j += up;
                    }
                    flag = 0;
                }else{ //down
                    if(down>0){
                        ans += s.at(j);
                        j += down;
                    }
                    flag = 1;
                }
            }
            down -= 2;
            up += 2;
        }
        return ans;
    }
};
