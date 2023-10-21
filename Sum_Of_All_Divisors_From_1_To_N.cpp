// Problem Link: https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1 

// INTUITION: For a given value of N we have to find sum of all divisors from 1 to n
// Eg: Input:
// N = 5
// Output:
// 21
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// F(5) = 1 + 5 = 6
// ans = F(1) + F(2) + F(3) + F(4) + F(5)
//     = 1 + 3 + 4 + 7 + 6
//     = 21

// so the formula that we have used is i*(N/i).
// The main part is why N/i. So if we look carefully we would observe that 
// 1 is getting repeated 5 times that is 5/1.
// 2 is getting repeated 2 time that is 5/2 = 2.
// 3 is getting repeated 1 time that is 5/3 = 1 time.
// 4 is getting repeated 1 time that is 5/4= 1 time.
// 5 is getting repeated 1 time that is 5/5= 1 time.

// now since 2 has occured 2 times so total sum of occurences of 2 is 2*2 = 4.
// similarly for 3 is it 3*1 = 3

// which boils down to the formula i*(N/i).

class Solution
{
public:
    
    long long sumOfDivisors(int N)
    {  long long ans=0;
        for(int i = 1; i <= N ; i++)
        {
            ans+= i*(N/i);
        }
        return ans;
    }
};
