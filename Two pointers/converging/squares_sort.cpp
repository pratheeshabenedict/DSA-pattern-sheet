class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int result=1;
        for(int i=0;i<n;i++){
            result=nums[i]*nums[i];
            ans.push_back(result);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
