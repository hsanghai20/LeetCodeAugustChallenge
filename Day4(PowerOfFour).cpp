// Link: https://leetcode.com/problems/power-of-four/

// solution:
    bool isPowerOfFour(int num) {
        if(num==0)
            return false;
        float x;
        x=log2(num);
        if(floor(x)==x)
        {
            int y=x;
            if(y%2==0)
                return true;
        }
        return false;
    }