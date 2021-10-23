class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        ans = nums;
        sort(ans.begin(),ans.end());
        map<int,int> m;
        for(int i=ans.size()-1;i>=0;i--){
            m[ans[i]] = i;
        }
        for(int j =0;j<nums.size();j++){
            nums[j] = m[nums[j]];
        }
        return nums;
    }
};
