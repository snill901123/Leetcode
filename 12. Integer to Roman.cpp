class Solution {
public:
    string intToRoman(int number) {
        int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string roman[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;
        string ans;
        while(number>0){
            int freq=number/num[i];
            number-=freq*num[i];
            while(freq--){
                ans+=roman[i];
            }
            i--;
        }
        return ans;
    }
};
