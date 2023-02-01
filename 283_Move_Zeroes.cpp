class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1 = 0;
        int p2 = 1;
        while(p2<nums.size()){
            if( nums[p1] != 0){
                p1++;
                p2++;
            }else if(nums[p2] != 0 ){
                nums[p1] = nums[p2];
                nums[p2] = 0;
                p1++;
                p2++;
            }else{
                p2++;
            }
        }
        
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1 = 0;
        int p2 = 0;
        int temp;
        while(p2<nums.size()){
            if( nums[p2] != 0){
                temp = nums[p1];
                nums[p1] = nums[p2];
                nums[p2] = temp;
                p1++;
            }
            p2++;
        }
        
    }
};


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[p] = nums[i];
                p++;
            }
        }
        for(int i = p; i< nums.size(); i++){
            nums[i] = 0;
        }
    }
};
