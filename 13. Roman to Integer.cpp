class Solution {
public:
    int romanToInt(string s) {
        map<char,int> roman_to_int = {
            { 'I', 1 },
            { 'V', 5 },
            { 'X', 10 },
            { 'L', 50 },
            { 'C', 100 },
            { 'D', 500 },
            { 'M', 1000 }
        };

        int res = 0;
        int i = 0;

        
        while(i<s.size()){

            if(i<s.size()-1){
                if(s[i] == 'I'){
                    if(s[i+1] == 'V'){
                        res = res + 4;
                        i = i+2;
                    } else if(s[i+1] == 'X'){
                        res = res + 9;
                        i = i+2;
                    } else {
                        res = res + roman_to_int[s[i]];
                        i++;
                    }
                } else if(s[i] == 'X'){
                    if(s[i+1] == 'L'){
                        res = res + 40;
                        i = i+2;
                    } else if(s[i+1] == 'C'){
                        res = res + 90;
                        i = i+2;
                    }  else {
                        res = res + roman_to_int[s[i]];
                        i++;
                    }
                } else if(s[i] == 'C'){
                    if(s[i+1] == 'D'){
                        res = res + 400;
                        i = i+2;
                    } else if(s[i+1] == 'M'){
                        res = res + 900;
                        i = i+2;
                    }  else {
                        res = res + roman_to_int[s[i]];
                        i++;
                    }
                } else {
                    res = res + roman_to_int[s[i]];
                    i++;
                }
            } else {
                res = res + roman_to_int[s[i]];
                i++;
            }

        }
        return res;
    }
};