Given a positive integer N, calculate the sum of all prime numbers between 1 and N(inclusive).

#include <bits/stdc++.h>
using namespace std;

int checkandReturnPrime(int n){
    int i,flag=1;
    for(i=2;i<=sqrt(n);i++){
        int x=n%i;
        if(x==0){
            flag=0;
            break;
        }
    }
    if(flag==0)
        return 0;
    if(flag==1)
        return n;
}

int main() {
	//code
	int T;
	cin>>T;
	while(T>0){
	    T--;
	    int N;
	    cin>>N;
	    int sum=0;
	    int i;
	    for(i=2;i<=N;i++){
	        int prime=checkandReturnPrime(i);
	        sum=sum+prime;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
