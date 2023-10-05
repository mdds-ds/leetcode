class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest_prefix = "";
        bool prefix=true;
        int min_length = strs[0].size();

        for(int i = 0; i<strs.size()-1; i++){
            min_length=min(min_length,int(strs[i].size()));
        }

        for(int j = 0; j<min_length && prefix; j++){
            int k = 0;
            while(prefix && k<strs.size()-1 && strs[k][j] == strs[k+1][j]){
                k++;
            }
            if(k != strs.size()-1){
                prefix = false;
                return longest_prefix;
            } else {
                longest_prefix.push_back(strs[k][j]);
            }
        }

        return longest_prefix;
    }
};