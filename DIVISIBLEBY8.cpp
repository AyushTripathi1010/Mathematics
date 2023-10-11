// Problem Link: https://www.codechef.com/problems/DIVISIBLEBY8?tab=statement

// INTUITION: Here the main thing is that value of n can be beyong long long also, so we are storing it in string.
// It is always possible to make a number divisible by 8 if its last three digits are divisible by 8.
// What we have done calculated remainder for whole numbers. This process that we have used take one character at time converts
// it to number and then we take out the modulo, for the whole string number like this.

// Also, we can always make a number divisible by 8 just by changing its last difit only, so we check distance of remainder from 8.
// and add that distance to last digit. If the last digit >= 10, so it might happen that there is increase in digit, but we want 
// same length string only. we will take distance of rem from 0. and convert it to smaller digit.
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int len;
	    string n;
	    cin>>len>>n;
	    
	    int mod= 0;
	    for(int i =0 ; i < len ; i++)
	    {
	        mod = (mod*10 + n[i] -'0')%8;
	    }
	    
	    if(mod == 0) {cout<<n<<endl; continue;}
	    
	    int last = n.back() - '0' + 8- mod;
	    
	    if(last >= 10)
	    {
	        last-=8;
	        
	    }
	    cout<<n.substr(0, len-1)<<last<<endl;
	}
	return 0;
}
