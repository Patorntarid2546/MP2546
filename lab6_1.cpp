#include<iostream>
using namespace std;

int main(){
    int M = 0;
    int N = 0;
    int O = 0; 
    cout << "Enter an integer: ";
    cin >> M;
    while(M != 0){
        if(M%2 == 0){
        cout << "Enter an integer: ";
        cin >> M;
            N = N + 1;
        }else{
        cout << "Enter an integer: ";
            cin >> M;
            O = O + 1;
        }
        
    }
        
    cout << "#Even numbers = " << N << endl;
    cout << "#Odd numbers = " << O << endl ;
    return 0;
}