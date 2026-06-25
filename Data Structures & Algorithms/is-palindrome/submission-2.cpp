class Solution {
public:
    bool isAlphaNumeric(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' and ch <= '9')) {
            return true;
        }
        return false;
    }
    bool checkPalindrome(string str) {
        int p1 = 0, p2 = str.size() - 1;

        while(p1 <= p2) {
            if(str[p1] == str[p2])
                p1 += 1, p2 -= 1;
            else
                break;
        }
        return p2 <= p1;
    }
    bool isPalindrome(string s) {
        string str = "";
        for(char ch: s) {
            if(isAlphaNumeric(ch)) {
                str += (ch - 'A') < 26 ? (char)((ch - 'A') + 97) : ch;
            }
        }
        return checkPalindrome(str);
    }
};
