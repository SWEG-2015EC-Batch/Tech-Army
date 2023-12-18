#include <iostream>
using namespace std;
int main(){
    int base = 6;

    for(int i = 1; i <= base; i++){
        for(int j = base - i; j > 0; j--){
            cout << "  ";
        }
        for(int k = 0; k < i; k++){
            cout << "*   ";
        }
        cout << endl;
    }

    return 0;
}7

