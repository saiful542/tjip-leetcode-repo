class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>v(130,0);
        for(auto c:t)
            v[c]++;
        int rechar=t.size();
        int l=0,r=0,mi=INT_MAX/2,sti=-1;
        while(r<s.size()){
            if(v[s[r]]>0)rechar--;
            v[s[r]]--;
            r++;

            while(rechar==0){
                if(mi>(r-l)){
                    mi=r-l;
                    sti=l;
                }
                if(v[s[l]]==0)rechar++;
                v[s[l]]++;
                l++;
            }

        }
        return sti==-1?"":s.substr(sti,mi);
        
    }
};