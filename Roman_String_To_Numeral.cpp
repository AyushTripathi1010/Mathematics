// Problem Link: https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1 

// INTUITION : SO what happens is, the if a string is suppose
// IV : so it is 4 , that means subtract 5(V) from 1(I).
// VI : here 5(V) is add with I(I) to make it number 6.
// so if(str[i] < str[i+1]) then substract str[i], otherwise
// add it in ans.
class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char, int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int ans =0 ;
        int n  = str.size();
        for(int i =0 ; i < n ; i++)
        {
            if(i < n-1 && m[str[i]] < m[str[i+1]])
            {
                ans-= m[str[i]];
            }
            else
            {
                ans+= m[str[i]];
            }
        }
        
        return ans;
        
    }
};
