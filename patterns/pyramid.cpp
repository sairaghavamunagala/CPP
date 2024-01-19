#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of rows:";
    cin >> n;

    for (int i = 0; i < n; i++) {
        
            // space
            for (int k = 0; k < n - i -1; k++) {
                cout << " ";
            }
            // star
            for (int k=0;k < 2*i+1;k++){
                cout << "*";
            }
            //space
            for (int k = 0; k < n - i -1; k++) {
                cout << " ";
            }
        
        cout << endl;
    }

    return 0;
}
