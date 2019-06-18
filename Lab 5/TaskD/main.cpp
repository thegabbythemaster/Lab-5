#include <iostream>
using namespace std;


int countPrimes(int a, int b) //new function
{

    int count=0;
    int k, i;
    for (k=a; k<=b; k++)
        {
        for(i=2;i<k;i++)
            {
                if(k%i==0)
                {break;}
            }
                if(i==k)
                {count++;}
            }   
    return count;
}
int main (){
    int x = 1;
    int y = 10;
    cout <<countPrimes(x, y);

    return 0;
}