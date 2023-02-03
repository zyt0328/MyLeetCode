//Brute force method
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i = 0; i <nums.size(); i++){
            for(int j = i+1; j <nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};

//Use haspmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> hashmap;
        vector<int> res;
        for(int i = 0; i< nums.size(); i++){
            int  complement= target - nums[i];
            if (hashmap.find(complement) == hashmap.end()){
                hashmap[nums[i]] = i;
            }else{
                res.push_back(hashmap[complement]);
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};
