class Solution {
public:
int romanToInt(string s) {
    int total = 0;
	
	// define map with value for each char
    unordered_map<char,int>val{        
    {'I',1},{'V',5},
    {'X',10},{'L',50},
    {'C',100},{'D',500},
    {'M',1000}
    };
		//go through string + shorthand IF because it looks nicer
        for(int i=0;i<s.length();i++){
          (val[s[i]] < val[s[i+1]]) ? total -= val[s[i]] : total += val[s[i]];
        }return total;
}};