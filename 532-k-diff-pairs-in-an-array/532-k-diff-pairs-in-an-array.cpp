class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<vector<int>>res;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k ){
                    res.insert({nums[i],nums[j]});
                }
            }
            count=res.size();
        }
        return count;
    }
};