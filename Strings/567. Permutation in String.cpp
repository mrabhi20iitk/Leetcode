class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(26), b(26);
        for(int i =0;i<s1.size();i++){
            a[s1[i]-'a']++;
        }
        for(int j = 0;j<s2.size();j++){
            b[s2[j]-'a']++;
            if(j>=s1.size()) b[s2[j-s1.size()]-'a']--;
            if(a==b) return true;
        }
        return false;
    }
};
