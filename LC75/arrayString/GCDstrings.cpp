class Solution {
public:
    string gcdOfStrings(const string& str1, const string& str2) {
        if (str1 + str2 != str2 + str1) return "";
        return str1.substr(0, gcd(str1.length(), str2.length()));
    }
};

// gcd algorithm works in this case bc it will return length of the greatest str the inputs can share
// since the str gcd is the prefix of the input string
// starting from zero and ending at the gcd will result in the str
