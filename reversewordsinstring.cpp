#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        // Reverse the complete string
        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            string word = "";

            // Make one word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the individual word
            reverse(word.begin(), word.end());

            // Add word to answer
            if (word.length() > 0) {
                ans += " " + word;
            }
        }

        // Remove extra space from beginning
        return ans.substr(1);
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = obj.reverseWords(s);

    cout << "Reversed words: " << result << endl;

    return 0;
}