class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        //runs good but tle 
        // int mx=0;
        // for (int i=0;i<nums.size();i++){
        //     int zero=0;
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[j]==0) zero++;
        //         if(zero<=k){
        //             int len=j-i+1;
        //             mx=max(mx,len);

        //         }else break;

        //     }
        // }return mx ;

        // sliding window

        int mx=0,l=0,r=0,zero=0;
        while (r<nums.size()){
            if(nums[r]==0) zero++;
            if(zero>k){
                if(nums[l]==0){
                    zero--;
                }
                    l++;
            }
            if(zero<=k){
                int len = r-l+1;
                mx=max(len,mx);

            }
            r++;
        }
        return mx;
        
    }
};