#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<string> names;

    
    int numberOfNames;
    cout << "Enter the number of names: ";
    cin >> numberOfNames;

    cout << "Enter names, one per line:" << endl;
    cin.ignore(); // Ignore the newline character left in the buffer
    for (int i = 0; i < numberOfNames; i++) {
        string name;
        getline(cin, name);
        names.push_back(name);
    }

    
    sort(names.begin(), names.end());

    // 
    cout << "Names in alphabetical order:" << endl;
    for (const string& name : names) {
        cout << name << endl;
    }

    return 0;
}
