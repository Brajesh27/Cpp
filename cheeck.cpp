#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	long long int h,x,y1,y2,k;
	cin>>h>>x>>y1>>y2>>k;
	long long int z = 0;
	if(y1*k>=h){
	    if(h%(y1*k)==0){
	        z = k;
	    }
	    else{
	        z = (y1*k)/h+1;
	    }
	     long long int q = h/x;
	    cout<<min(q,z)<<"\n";
	}
	else {
	   long long int w = h-(y1*k);
      
	     if(w%y2!=0) w=w/y2+1+k;
	     else w=w/y2;
       
	    long long int q = h/x;
        if(h%x!=0) q++;
	    cout<<min(q,w)<<"\n";
	}
	}
	return 0;
}
