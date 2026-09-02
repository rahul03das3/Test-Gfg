class Solution {
  public:
    string encode(string &s) {
        string result;
        int n = s.size();
        int count = 1;

        for (int i = 1; i <= n; i++) {
            if (i < n && s[i] == s[i - 1]) {
                count++;
            } else {
                result += s[i - 1];
                result += to_string(count);
                count = 1;
            }
        }
        return result;
    }
};
