class Solution {
public:
    int arraySign(vector<int>& nums) {
        //long long product=1;
        long long result=1;
        for(int i=0;i<nums.size();i++){
            result=result*nums[i];
            if(result==0){
                return 0;
            }
            result/=abs(nums[i]);
        }
        
        if(result>0){
            return 1;
        }
        else {
            return -1;
        }
        
    }
};