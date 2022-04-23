// TC - O(n) 
// MC - O(n)
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;
        for (auto s : strs)
        {
            string st = s;
            sort(st.begin(), st.end());
            mp[st].push_back(s);
        }
        for (auto i : mp)
        {
            res.push_back(i.second);
        }
        return res;
    }
};
