class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //brute force
        // int mx=0;
        // for (int i=0;i<s.size();i++){
        //   int  h[255]={0};
        //     for (int j=i;j<s.size();j++){
        //         if(h[s[j]]==1) break;
        //         int len = j-i+1;
        //         mx=max(mx,len);
        //         h[s[j]]=1;
        //     }
        // }
        // return mx;

        //optimal
        int hash[256];
        fill(hash, hash + 256, -1);
        int l=0,r=0,mx=0;
        int n= s.size();
        while (r<n){
            if(hash[s[r]]!=-1){
                l = max(l, hash[s[r]] + 1);

            }
            int len =r-l+1;
            mx=max(mx,len);
            hash[s[r]]=r;
            r++;
        }
       return mx;

    }
};