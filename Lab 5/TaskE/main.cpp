#include <iostream>
using namespace std;
 bool isPrime(int n){
 if(n<2){
     return false;
 }
 bool hold = true;
 for (int i=2; i<n; i++){
 if(n% i==0) {
     hold = false;
     }
 }
 return hold;
 }
bool isTwinPrime(int n)
		{
		bool outcomeTP, outcomeTPP, outcomeTPP2, outcomeTPX; //we make
		outcomeTP=isPrime(n);	//true or false statements for the twin
		if(outcomeTP == false) //primes
{
	return false;
	}
	else if(outcomeTP == true)
		{
        if(isPrime(n-2) == true || isPrime(n+2) == true){
		return true;
		}
	else{return false;}

}

return false;

}

int main (){
  int x = 17;
  cout <<isTwinPrime(x);
    return 0;
}