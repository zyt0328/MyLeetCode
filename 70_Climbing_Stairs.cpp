class Solution {
public:
  int climbStairs(int n) {
        if (n == 1){
            return 1;
        }
        if (n == 2){
            return 2;
        }
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

//Simple recursion solution
//Over time
//Involves too much duplication of calculations


//Use hashmap to store the computed n,avoid duplicate computation
class Solution {
public:
    std::map<int, int> hashmap;
    int climbStairs(int n) {
        int res;
        if (n == 1){
            return 1;
        }
        if (n == 2){
            return 2;
        }
        if (hashmap.find(n) != hashmap.end()){
            return hashmap[n];
        }else{
            res = climbStairs(n - 1) + climbStairs(n - 2);
            hashmap[n] = res;
            return res;
        }     
    }
};
