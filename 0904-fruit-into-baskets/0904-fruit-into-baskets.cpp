class Solution {
public:
    int totalFruit(vector<int>& f) {
        int n = f.size();
        int i = 0;
        int maxx = 0;
        unordered_map<int, int> mp;

        for (int j = 0; j < n; j++) {
            mp[f[j]] = j;

            if (mp.size() > 2) {
                int mn = n;
                int x;

                for (auto it : mp) {
                    if (it.second < mn) {
                        mn = it.second;
                        x = it.first;
                    }
                }

                i = mn + 1;
                mp.erase(x);
            }

            maxx = max(maxx, j - i + 1);
        }

        return maxx;
    }
};