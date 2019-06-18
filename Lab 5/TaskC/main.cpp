#include <iostream>
using namespace std;

int nextPrime(int n);
int nextPrime(int n) //new function to see next prime number
{

  int j;
  j = n + 1;

    if(n < 0){
        j = 2;
        return j;
    }
    for(int i = 2; i< j; i++){
        if(j % i ==0){
            j++;
            i = 2;
        }

        }
    }
int main(){
    int x;
    cout <<"Enter number: ";
    cin >> x;
    cout<<endl<<"The next prime number of "<< x <<" is: "<< nextPrime(x) << endl;
    return 0;
}
