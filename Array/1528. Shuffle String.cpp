class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;
        for(int i =0;i<s.size();i++){
            m[indices[i]] = s[i];
        }
        int j =0;
        for(auto it=m.begin();it!=m.end();it++){
            s[j] = it->second;
            j++;
        }
        return s;
        
    }
};
