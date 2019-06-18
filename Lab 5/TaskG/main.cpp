#include <iostream>
using namespace std;
bool isDivisibleBy(int n, int d)

{
    if(d==0)
    {
        return false;
    }
    if(n%d==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isPrime(int n) //old function
{
    if(n<2) //if n is greater tha 2
    {
        return false; //return false
    }
    bool hold=true; //otherwise it be true :)
    for(int i=2;i<n; i++)
    {
        if(n%i==0)
        {
            hold=false;
        }

    }
    return hold;
}
int nextPrime(int n) //old function
{
bool nextP=false;
    int j;
    j=n+1; //we use this to count for the next number
    if(n<0)
        {
            j=2;
            return j;
        }
    for(int i=2;i<j;i++)
    {
        if(j%i==0)
        {
            j++;
            i=2;
        }
        else
        {
           nextP=true;        
        }
    }
    return j;
}
int countPrimes(int a, int b)
{
    int count=0;
    int k, i;
    for (k=a; k<=b; k++)
    {
        for(i=2;i<k;i++)
        {
            if(k%i==0)
            {
                break;    //it breaks right away not getting to itself
            }
        }
        if(i==k)         //if it gets through all the numbers of up to itself and still doesn't find a zero remainder, then it adds one to count.
        {
        count++;
        }
    }
    return count;
}
bool isTwinPrime(int n)
{

bool outcomeTP;
    outcomeTP=isPrime(n);
    if(outcomeTP == false)
    {
        return false;
    }
    else if(outcomeTP == true)
    {
        if(isPrime(n-2) == true || isPrime(n+2) == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}
int nextTwinPrime(int n)
{
    int k=n+1;
    int actualTP;
    if(n<2)
    {
    return 3;
    }
    for(int i=k;i!=(isTwinPrime(i)==true);i++)
        {
            if(isTwinPrime(i) == true)
            {
                actualTP=i;
                break;
            }
        }
    return actualTP;
}
int largestTwinPrime(int a, int b)
{
    int largest = a;
    
    for(int i=b; i>=a; i--)
    {
        if(isTwinPrime(i)==true)
        {
            return i;
        }
    }
    return -1;;
}
int main()
{
    int aa, bb;
    cout<<"Enter a range of numbers: "<<endl;
    cin>>aa>>bb;
    cout << largestTwinPrime(aa,bb); //this is where we call our new function
    return 0;
}