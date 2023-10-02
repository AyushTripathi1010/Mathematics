// Problem Link: https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1

// INTUITION : here for a given positive integer we have to convert it into column
// columns of excel sheet, which are from A,B,C,...,Z, AA,AB,AC,..AZ,BA,BB,BC,..BZ
// and so on 

// SO a column will obviously have letter in range of 0 to 25(0-indexed),
// If we keep on dividing by 26, at every step we will be getting a remainder, which will be
// in range of 0 to 25, and will store the corresponding letter.

// It is basically conversion from base 10 to base 26.
class Solution{
    public:
    string colName (long long int n)
    {
        string temp = "abcdefghijklmnopqrstuvwxyz";
        // STL function for converting string to upperCase
        transform(temp.begin() , temp.end(), temp.begin(), ::toupper);
        string ans="";
        // return temp;
        
        while(n)
        {  
            long long rem = (n-1)%26;
            n= (n-1)/ 26;
            
            ans =  temp[rem] + ans;
            
        }
        
        return ans;
        
        
    }
};