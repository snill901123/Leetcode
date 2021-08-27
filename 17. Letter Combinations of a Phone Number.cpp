class Solution {
public:
    vector<string>ans;
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return ans;
        }
        recursion(digits,0,{""});
        return ans;
    }
    void recursion(string s,int pos,vector<string> v){
        if(pos==s.length()){
            ans=v;
            return;
        }
        vector<string> deep;
        int phone_num=s[pos]-'0';
        int times;
        phone_num==7 || phone_num==9 ? times=4 :times=3;
        int char_num='a'+(phone_num-2)*3;
        int plus= phone_num>7 ? 1:0;        //數字大於8的時候要加1
        for(int i=0;i<times;i++){
            for(string str:v){
                deep.push_back(str+char(char_num+i+plus));
            }
        }
        recursion(s,pos+1,deep);
    }
};
