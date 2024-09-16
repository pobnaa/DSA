class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=0,mx=0;
        for (int i=0;i<k;i++){
            l+=cardPoints[i];
        }
        mx=l;
       int  r_idx=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            l-=cardPoints[i];
            r+=cardPoints[r_idx];
            r_idx--;
            mx=max(mx,l+r);
        }
    
        return mx;
    }
};