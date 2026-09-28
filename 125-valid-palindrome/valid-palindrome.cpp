#include <bits/stdc++.h>
class Solution {
private:
    bool checkPalindrome(const string& s,int left,int right){
        //for checking if centre crossed
        if(left>=right) return true;

        //for checking left alphanumeric
        if(!isalnum(s[left])) return checkPalindrome(s,left+1,right);
        
        //for checking right alphanumeric
        if(!isalnum(s[right])) return checkPalindrome(s,left,right-1);
        
        //if equal for lower case
        if(tolower(s[left]) != tolower(s[right])) return false;

        return checkPalindrome(s,left+1,right-1);
    }
public:
    bool isPalindrome(string s) {
        return checkPalindrome(s,0,s.length()-1);
    }
};