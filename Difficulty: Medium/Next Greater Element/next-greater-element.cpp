class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n, -1);
        stack<int> st; // stack to store candidates

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Pop all smaller or equal elements
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            // If stack not empty, top is next greater
            if (!st.empty()) {
                result[i] = st.top();
            }
            // Push current element
            st.push(arr[i]);
        }
        return result;
    }
};
