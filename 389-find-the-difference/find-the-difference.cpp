class Solution {
public:
    char findTheDifference(string s, string t) {

        char C = 0;
        for(char cs: s) C ^= cs;
        for(char ct: t) C ^= ct;
        return C;

        
    }
};