#include <iostream>
using namespace std;

    bool isDivisbleBy(int n, int d);
    bool isDivisbleBy(int n, int d){
        if(n % d == 0){
            return true;
        }
        else{
            return false;
        }
    }

    int main(){
        int x;
        int y;
        cout <<"Enter two values: ";
        cin>> x;
        cin >> y;
        
        cout <<endl<< isDivisbleBy(x, y) << endl;

    return 0;

}