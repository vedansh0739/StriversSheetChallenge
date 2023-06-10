#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
		long long ans=1;
		x=x%m;
        while (n > 0) {
          if (n % 2 == 1) {
			  ans=(long long)ans*x%m;
			  n--;
		  }
            x = (long long)x * x%m;
            n /= 2;
          
			  	
		  
        }
		return (int)ans;
}
