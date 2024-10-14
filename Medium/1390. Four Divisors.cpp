class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int mx = 100001;
        vector<vector<int>> v(mx);

        for (int i = 1; i < mx; i++) {
            for (int j = i; j < mx; j += i) {
                v[j].push_back(i);
            }
        }

        int s = 0;
        for (int num : nums) {
            if (v[num].size() == 4) {
                for (int div : v[num]) {
                    s += div;
                }
            }
        }

        return s;
    }
};
