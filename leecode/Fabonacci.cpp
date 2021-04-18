//#include<stdlib.h>
#include<cstdlib>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:
		// memorized method in dynamical programming
		vector <int> fibm;
        
    		int fib(int n) {
        		if(fibm.size()<2){
                		fibm.push_back(0);
            			fibm.push_back(1);
        		}
        		if (fibm.size()-1 >= n){
	              		return fibm[n];  
	          	}	 
        		if( n < 2){
	            		return fibm[n];
	            	}   
        		else{
	            		int buffer = fib(n-1) + fib(n-2); 
	                	fibm.push_back(buffer); 
	                	return buffer;
	        	} 
    		}
    		Solution(){
		}
};
int main(){
	Solution sol;
	cout<<sol.fib(4)<<endl;
}
