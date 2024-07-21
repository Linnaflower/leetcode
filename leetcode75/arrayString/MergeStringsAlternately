class Solution {
public:
    string mergeAlternately(const string& word1, const string& word2);
};
string Solution::mergeAlternately(const string& word1, const string& word2) {
    string new_str = "";
    int len1 = word1.length();
    int len2 = word2.length();
    int i=0;
    int j=0;

    while (i < len1 || j < len2){
        if (i < len1){
            new_str.push_back(word1[i]);
            i++;
        }
        if (j < len2){
            new_str.push_back(word2[j]);
            j++;
        }
    }
    return new_str;
}
