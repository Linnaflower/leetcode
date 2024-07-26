class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int sSize = s.size();
        int tSize = t.size();

        while (i < sSize && j < tSize){
            if (s[i] == t[j]){
                i++; //you only need to change the i index (move on to the next element of s) when you found a match
            }
            j++;
        }
        return i == sSize;
    }
};
// check if string s is in t
