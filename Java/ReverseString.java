class ReverseString { //change the class name to Solution
    public void reverseString(char[] s) {
        reverse(s, 0, s.length-1);
    }

    public void reverse(char[] s, int left, int right) {
        if(left >= right) {
            return;
        }

        char aux = s[left];
        s[left] = s[right];
        s[right] = aux;
        reverse(s, left+1, right-1);
    }
}
