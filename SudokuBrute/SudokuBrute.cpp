#include <iostream>
using namespace std;

int numberGrid[9][9] = { {1,0,1,0,1,0,1,0,1}, {2,2,2,2,2,2,2,2,2}, {1,0,1,0,1,0,1,0,1}, {1,2,3,4,5,6,7,8,9}, {1,0,1,0,1,0,1,0,1}, {5,5,5,5,5,5,5,5,5}, {1,0,1,0,1,0,1,0,1}, {6,6,6,6,6,6,6,6,6}, {1,0,1,0,1,0,1,0,1} };
int rowNumber, colNumber, colResults;
bool disp;

bool checkRow(int rowNumber, bool disp) {
    int rowResult[9];
    int rowSum = 0;
    rowNumber--;
    for (int i = 0; i < 9; i++) {
        rowResult[i] = numberGrid[rowNumber][i];
        rowSum = rowSum + rowResult[i];
        if (disp == true) {
            cout << " " << rowResult[i];
            if (i == 2 || i == 5) {
                cout << " |";
            }
        }
    }
    cout << "   " << rowSum << endl;
    return true;
}

bool checkCol(int colNumber, bool disp) {
    int colResult[9];
    int colSum;
    colNumber--;
    for (int i = 0; i < 9; i++) {
        colResult[i] = numberGrid[i][colNumber];
        cout << colResult[i] << endl;
    }
    return true;
}

void printGrid() {
    for (int i = 1; i < 10; i++) {
        checkRow(i, true);
        if (i == 3 || i == 6) {
            for (int j = 1; j < 24; j++) {
                if (j == 8 || j == 16) {
                    cout << "+";
                } else {
                    cout << "-";
                }
            }
            cout << endl;
        }
    }
}

int main() {
    printGrid();
    return 0;
}
