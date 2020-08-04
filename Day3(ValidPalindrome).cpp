// Link: https://leetcode.com/problems/valid-palindrome/

// solution:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9')
                str+=s[i];
            else if(s[i]>='A' && s[i]<='Z')
                str+=tolower(s[i]);
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        if(rev==str)
            return true;
        return false;
    }