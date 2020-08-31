You are given two numbers A and B. Write a program to count number of bits needed to be flipped to convert A to B.

#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T>0){
	    int A,B;
	    cin>>A>>B;
	    int count = 0;
	    for(int i=0;i<32;i++){
	        if(((A >> i)&1) != ((B >> i)&1))
	            count = count+1;
	    }
	    cout<<count<<endl;
	    T--;
	}
	return 0;
}


OUTPUT

10 20
4
