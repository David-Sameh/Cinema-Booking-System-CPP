#include <iostream>
using namespace std;

int main() {
    int cinema[5][5] = {0};
    int totalIncome = 0;

    while (true) {
        cout << "\n--- SCREEN ---\n";
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << cinema[i][j] << " ";
            }
            cout << endl;
        }

        cout << "\nTotal Revenue: " << totalIncome << " EGP" << endl;

        int r, c;
        cout << "Enter row and column (1-5) to book (or 0 0 to exit): ";
        cin >> r >> c;

        if (r == 0 && c == 0) {
            cout << "Goodbye! Final Income: " << totalIncome << " EGP" << endl;
            break;
        }

        if (cinema[r - 1][c - 1] == 1) {
            cout << "Error: This seat is already taken!\n";
        } else {
            cinema[r - 1][c - 1] = 1;
            totalIncome += 50;
            cout << "Booking Done! Seat reserved.\n";
        }
    }

    return 0;
}
