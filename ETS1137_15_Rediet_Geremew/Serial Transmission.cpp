#include <iostream>
using namespace std;
/*this is a code to obtain the serial transmission 
of a file;*/
int main() {
    double fileSize; 
    double transmissionRate = 960.0; 
    cout << "Enter file size in bytes: ";
    cin >> fileSize;
    double numCharacters = fileSize * 8; 
    double timeTaken = numCharacters / transmissionRate;
    int hours = timeTaken / 3600;
    int minutes = (int(timeTaken) % 3600) / 60;
    int seconds = int(timeTaken) % 60;
    cout << "Time taken to transmit the file: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

    return 0;
}
