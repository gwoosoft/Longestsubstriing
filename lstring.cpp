class Solution {
public:
   int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> se;
        int i=0,j=0;
        int mx = 0;
        while(j<n)
        {
            if(se.count(s[j])==0)
            {
                se.insert(s[j]);
                mx = max(mx,(int)se.size());
                j++;
            }
            else
            {
                se.erase(s[i]);
                i++;
            }
        
        }   
    return mx;
    }
};
