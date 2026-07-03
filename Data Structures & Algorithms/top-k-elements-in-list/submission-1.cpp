class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hmp;

        for(int x: nums)
            hmp[x] += 1;
        
        // create a min heap..
        priority_queue<pair<int, int>> min_heap;

        for(auto x: hmp) {
            min_heap.push({x.second, x.first});
        }

        vector<int> res;
        while(k--) {
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }

        return res;

        // vector<int> res;

        // vector<int> freq(n + 1, 0);
        // for(int x: nums)
        //     freq[x] += 1;
        
        // for(int indx = n; indx >= 0)

        // unordered_map<int, int> hmp;

        // for(int i: nums)
        //     hmp[i] += 1;
        
        // set<pair<int, int>, greater<pair<int, int>>> st;
        // for(auto x: hmp) 
        //     st.insert({x.second, x.first});

        // vector<int> res;
        // for(auto x: st) {
        //     if(k == 0) break;\
        //     res.push_back(x.second);
        //     k -= 1;
        // }

        return res;
    }
};
