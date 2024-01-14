
#include <iostream>
using namespace std;
int main() {
    
    bool friendships[5][5] = {
        {false, true, false, true, true},
        {true, false, true, false, true},
        {false, true, false, false, false},
        {true, false, false, false, true},
        {true, true, false, true, false}
    };

    
    int friendship_pairs = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (friendships[i][j]) {
                friendship_pairs++;
            }
        }
    }

    
    std::cout << "Number of friendship pairs: " << friendship_pairs << std::endl;

    return 0;

    
    
}
