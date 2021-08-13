class Solution {
public:
    string convert(string s, int numRows) {
        int row_control=-1,column_control=0;
        int count=1,i=0,j=0;
        int len=s.length();
        if(numRows==1){
            return s;
        }
        string ans;
        char arr[numRows][len];
        for(int a=0;a<numRows;a++){
            for(int b=0;b<len;b++){
                arr[a][b]=0;
            }
        }
        while(count<=len){
            if(i%(numRows-1)==0){
                row_control*=-1;
            }
            if(row_control==-1){
                column_control=1;
            }else{
                column_control=0;
            }
            arr[i][j]=s[count-1];
            i+=row_control;
            j+=column_control;
            count++;
        }
        for(int a=0;a<numRows;a++){
            for(int b=0;b<len;b++){
                if(arr[a][b]){
                    ans+=arr[a][b];
                }
            }
        }
        return ans;
    }
};
