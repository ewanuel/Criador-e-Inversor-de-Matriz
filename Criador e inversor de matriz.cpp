#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


#include <iostream>

int main(){
    using namespace std;

    int m[2][2];
    int x, y;

    cout << "Digite o valor da matriz:\n";

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            cin >> m[x][y];
        }
    }

    cout << "Matriz original:\n";

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            cout << m[x][y] << " ";
        }
        cout << "\n";
    }

    int inverted[2][2];

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            inverted[x][y] = m[1 - y][1 - x];
        }
    }

    cout << "Matriz invertida:\n";

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            cout << inverted[x][y] << " ";
        }
        cout << "\n";
    }

    return 0;
}





