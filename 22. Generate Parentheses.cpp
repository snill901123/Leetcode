class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generPara(ans,"",0,0,n);
        return ans;
    }
    void generPara(vector<string>&vec,string str,int start,int close,int n){
        if(str.length()==2*n){
            vec.push_back(str);
            return;
        }
        if(start<n){
            generPara(vec,str+'(',start+1,close,n);
        }
        if(close<start){
            generPara(vec,str+')',start,close+1,n);
        }
    }
};
