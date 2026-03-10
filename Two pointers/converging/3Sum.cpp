class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result = 0;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k=nums.size()-1;
            while(j<k){
                result = nums[i] + nums[j] + nums[k];
                if(result<0)
                    j++;
                else if(result>0)
                    k--;
                else if(result==0){
                   vector<int> temp = {nums[i],nums[j],nums[k]};
                    k--;
                    j++;
                    ans.push_back(temp);
                    while(j<nums.size() && nums[j]==nums[j-1]) j++;
                    while(k<nums.size() && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};
