class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>v;
        
        /*if(nums.size()==1){
            return {};
        }*/
        
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        for(auto i:m){
            if(i.second>1){
                v.push_back(i.first);
            }
        }
        
        if(v.size()==0){
            return v;
        }
        
        sort(v.begin(),v.end());
        return v;
    }
};