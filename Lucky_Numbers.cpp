// Problem Link: https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1

// INTUITION: In Brute Force we are just inserting numbers in set and, then
// removing them from the set starting from i = 2, 
// and every time setting the iterator at a particular position using advance()

// For Optimsed Approach we are simply converting the number n to number, where
// it has now reached:
// Eg: n = 9, so 1,2,3,4,5,6,7,8,9
// After removing every 2nd element
// 1,3,5,7,9
// so if you look number 9 is not where number 4 was previously. Therfore n becomes 4.
// and if suppose iteration becomes 6, which is greter than n = 4(original, 9) now, then it means now its time to exit from 
// loop, because we can;t further delete elements.


// Brute Force - Gives TLE

class Solution{
public:
    bool isLucky(int n) {
        // code here
        
        int i = 2;
        set<int> s;
        for(int i =1 ; i <= n ; i++) s.insert(i);
        stack<int> st;
        
        
        while(s.size() >= i)
        {   auto it = s.begin();
            advance(it , i-1);
            st.push(*it);
            for(int j = i+i ; j<= s.size() ; j+=i)
            {   
                advance(it , i);
                st.push(*it);
                
            }
            
            while(!st.empty())
            { 
                s.erase(st.top());
                st.pop();
                
            }
            
            i++;
        }
        
        
        if(s.count(n))
        return true;
        
        return false;
    }
};


// Optimised: O(sqrt(n));


class Solution{
public:
    bool isLucky(int n) {
        // code here
        int i =2 ;
        
        while(true)
        {
            if(n%i == 0) return false;
            
            if(n%i == n) break;
            
            n = n - (n/i ) ;
            i++;
        }
        return true;
        
    }
};