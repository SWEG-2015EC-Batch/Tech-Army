#include <iostream>
using namespace std;
int main(){
    int base = 6;

    for(int i = 1; i <= base; i++){
        for(int j = base - i; j > 0; j--){
            cout << "  ";
        }
        for(int k = 0; k < i; k++){
            if(k == 0 k == i - 1 i == base)
                cout << "*   ";
            else
                cout << "    ";
        }
        cout << endl;
    }

    return 0;
}











