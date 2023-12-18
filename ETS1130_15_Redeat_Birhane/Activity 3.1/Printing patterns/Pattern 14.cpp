#include <iostream>
using namespace std;
int main(){
    char letter = 'A';
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 6; k++, letter++)
            cout << letter << " ";
        cout << endl;
    }

    return 0;
}
