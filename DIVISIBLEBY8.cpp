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
