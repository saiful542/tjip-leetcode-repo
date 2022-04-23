// TC - O(n)
// MC - O(1)
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string mn = strs[0], mx = strs[0], str;
        for (auto s : strs)
        {
            mn = min(mn, s);
            mx = max(mx, s);
        }
        for (int i = 0; i < mn.size(); i++)
        {
            if (mn[i] != mx[i])
            {
                break;
            }
            str += mn[i];
        }
        return str;
    }
};
