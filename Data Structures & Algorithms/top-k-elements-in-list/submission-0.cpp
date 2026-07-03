class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hmp;

        for(int i: nums)
            hmp[i] += 1;
        
        set<pair<int, int>, greater<pair<int, int>>> st;
        for(auto x: hmp) 
            st.insert({x.second, x.first});

        vector<int> res;
        for(auto x: st) {
            if(k == 0) break;\
            res.push_back(x.second);
            k -= 1;
        }

        return res;
    }
};
