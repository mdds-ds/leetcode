class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> elements;
        int n = nums.size();
        int threshold = n / 3;
        int minimum = nums[0], maximum = nums[0];
        for(int i = 1; i<nums.size(); i++){
            maximum = max(maximum,nums[i]);
            minimum = min(minimum,nums[i]);
        }
        vector<int> count(maximum-minimum+1, 0);
        for(int j = 0; j<nums.size();j++){
            count[ nums[j] - minimum ]++;
        }
        vector<int> solution;
        for(int k=0; k<count.size(); k++){
            if(count[k]>threshold){
                solution.push_back(k+minimum);
            }
        }
        return solution;
    }
};