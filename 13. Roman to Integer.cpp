class Solution {
public:
    int romanToInt(string s) {
        char ch = s[0];
        int result = ch == 'M' ? 1000 : ch == 'D' ? 500
                   : ch == 'C' ? 100  : ch == 'L' ? 50
                   : ch == 'X' ? 10   : ch == 'V' ? 5 
                   : 1;
        for(int i = 1; i < s.length(); i++) {
            switch(s[i]) {
                case 'M':
                    result += s[i-1] == 'C' ? 800 : 1000;
                    break;
                case 'D':
                    result += s[i-1] == 'C' ? 300 : 500;
                    break;
                case 'C':
                    result += s[i-1] == 'X' ? 80 : 100;
                    break;
                case 'L':
                    result += s[i-1] == 'X' ? 30 : 50;
                    break;
                case 'X':
                    result += s[i-1] == 'I' ? 8 : 10;
                    break;
                case 'V':
                    result += s[i-1] == 'I' ? 3 : 5;
                    break;
                case 'I':
                    result += 1; 
                    break;
            }
        }
        return result;
        }
};
