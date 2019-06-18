#include <iostream>
 using namespace std; //function for comparing and printing if dividible

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
 int main() {
 int n;
 bool answer;
 cout <<"enter a number: " << endl;
 cin >> n;
 
 answer=isPrime(n);
 if(answer == false) {
 cout << "not a prime" << endl;
 }
 else{
 cout <<"is a prime" << endl;
 }
 return 0;
 }
