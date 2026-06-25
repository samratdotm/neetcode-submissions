class Solution {
public:
    bool isAlphaNumeric(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' and ch <= '9')) {
            return true;
        }
        return false;
    }
    bool checkPalindrome(string str) {
        string tmp = str;
        reverse(tmp.begin(), tmp.end());
        if(tmp == str) {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        string str = "";
        for(char ch: s) {
            if(isAlphaNumeric(ch)) {
                str += (ch - 'A') < 26 ? (char)((ch - 'A') + 97) : ch;
            }
        }
        cout << str << endl;
        return checkPalindrome(str);
    }
};
