

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int strCount = 0;
        int start = 0,end = t.length();

        string str;

        while(start < end && strCount < s.length()){
            if(s[strCount] == t[start]){
                str.push_back(t[start]);
                strCount++;
            }

            start++;

        }

        if(s==str)
            return true;
        else
            return false;
    }
};