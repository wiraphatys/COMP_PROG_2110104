#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string a;
    cin>> a;
    int A[15];
    for(int i = 0; i<=11; i++){
        A[i] = a[i]-48;
    }
     A[12] = (11-(13*A[0] + 12*A[1] + 11*A[2] + 10*A[3] + 9*A[4] + 8*A[5] + 7*A[6] + 6*A[7] + 5*A[8] + 4*A[9] + 3*A[10] + 2*A[11])%11)%10 ;

    // cout << a[0] << "-" << a[1] << a[2] << a[3] << a[4] << "-" << a[5] << a[6] << a[7] << a[8] << a[9] << "-" << a[10] << a[11] << "-" << (string)n;
    for(int i=0 ; i<= 12 ; i++){
        cout << A[i];
        if (i==0 || i==4 || i==9 || i==11){
            cout << "-";
        }
    }
    
}