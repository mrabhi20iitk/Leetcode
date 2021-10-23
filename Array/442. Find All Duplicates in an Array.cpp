class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr;
        unordered_set<int> s;
        for(auto x: nums){
            if(s.count(x)>0){
                arr.push_back(x);
            }
            s.insert(x);
        }
        return arr;
        
    }
};
