class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int mx=0;
        for (int i=0;i<s.size();i++){
          int  h[255]={0};
            for (int j=i;j<s.size();j++){
                if(h[s[j]]==1) break;
                int len = j-i+1;
                mx=max(mx,len);
                h[s[j]]=1;
            }
        }
        return mx;
    }
};