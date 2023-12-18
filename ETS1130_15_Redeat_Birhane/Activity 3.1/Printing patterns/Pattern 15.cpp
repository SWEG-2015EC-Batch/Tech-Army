#include <iostream>
using namespace std;
int main(){
     for(int i = 0; i < 5; i++){
        char letter = 'A';
        for(int k = 0; k <= i; k++, letter++)
            cout << letter << " ";
        cout << endl;
    }

    return 0;
}
