class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);

        return isPalindrome(s, 0, s.length()-1);
    }

    bool isPalindrome(string s, int start, int end) {
    if(start >= end) {
        return true;
    }
    
    if(s[start] != s[end]) {
        return false;
    }


    return isPalindrome(s, start+1, end-1);
}
};
