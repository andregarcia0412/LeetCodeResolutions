class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size() - 1);
    }
    void reverse(vector<char>& s, int start, int end)
    {
        if (start >= end)
        {
            return;
        }

        char aux = s[start];
        s[start] = s[end];
        s[end] = aux;

        reverse(s, start + 1, end - 1);
    }
};
