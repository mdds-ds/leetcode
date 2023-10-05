class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> pal;
        int y = x;
        if(y<0) return false;
        while(y != 0){
            if(abs(y)<10){
                pal.push_back(y);
                y = y/10;
            } else {
                pal.push_back(y%10);
                y = y/10;
            }
        }
        bool palindrome=true;
        for(int i = 0; i<pal.size(); i++){
            if(pal[i] != pal[pal.size()-1-i]){
                palindrome=false;
            }
        }
        return palindrome;
    }
};