// Link: https://leetcode.com/problems/detect-capital/

// solution:
bool detectCapitalUse(string word) {
        bool match1=true,match2=true;
        // ALL CAPS
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
                continue;
            else
            {
                match1=false;
                break;
            }
        }
        if(match1)
            return true;
        // START with caps or all non caps
        for(int i=1;i<word.length();i++)
        {
            if(word[i]>='a' && word[i]<='z')
                continue;
            else
            {
                match2=false;
                break;
            }
        }
        if(match2)
            return true;
        return false;
    }