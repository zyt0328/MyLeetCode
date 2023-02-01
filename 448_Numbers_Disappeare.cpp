class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int x;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i]<0){
                x = (-nums[i]-1);
            }else{
                x = (nums[i]-1);
            }
             
            if(nums[x]>0){
                nums[x] = -nums[x];
            }
            
            
        }
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            if (nums[i]>0){
                res.push_back(i+1);
            }
        }
        return res;
    }
};
