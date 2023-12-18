#include <iostream>
using namespace std;
int main(){
    int base = 6;

    for(int i = base; i >= 1; i--){
        for(int j = 0; j < base - i; j++){
            cout << "  ";
        }
        for(int k = 0; k < i; k++){
            cout << "*   ";
        }
        cout << endl;
      return 0;
    }
