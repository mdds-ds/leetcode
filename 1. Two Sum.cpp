class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        
        unordered_map<int,int> ht;

        for(int i=0; i<nums.size(); i++){
            int complement = target-nums[i];
            if(ht.find(complement) != ht.end()){
                solution.push_back(min(ht[complement],i));
                solution.push_back(max(ht[complement],i));
                return solution;
            }
            ht[nums[i]] = i;
        }
        return solution;
    }
};