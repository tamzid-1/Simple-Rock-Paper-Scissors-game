#include <iostream>
#include <cstdlib>
using namespace std;
void winner(int x, char move) {
    if (move == 'r') {
        if (x == 1) {
            cout << "It's a tie!" << endl;
        } else if (x == 2) {
            cout << "You have lost" << endl;
        } else if (x == 3) {
            cout << "You have won!" << endl;
        }
    } else if (move == 'p') {
        if (x == 1) {
            cout << "You have won!" << endl;
        } else if (x == 2) {
            cout << "It's a tie!" << endl;
        } else if (x == 3) {
            cout << "You have lost" << endl;
        }
    } else if (move == 's') {
        if (x == 1) {
            cout << "You have lost" << endl;
        } else if (x == 2) {
            cout << "You have won!" << endl;
        } else if (x == 3) {
            cout << "It's a tie!" << endl;
        }
    }
}

int main() {
    cout << "ROCK PAPER SCISSOR GAME" << endl;
    cout << "***********************"<<endl;
    cout << "***********************" << endl;
    char move;
    do {
    cout << "'r' for ROCK" << endl;
    cout << "'p' for PAPER" << endl;
    cout << "'s' for SCISSOR" << endl;
    cout << "Your move: ";
    cin >> move;
    } while (move != 'r' && move != 'p' && move != 's');
    if (move == 'r') {
        cout << "Your move is ROCK" << endl;
    } else if (move == 'p') {
        cout << "Your move is PAPER" << endl;
    } else if (move == 's') {
        cout << "Your move is SCISSOR" << endl;
    }
    int x = rand() % 3 + 1;
    if (x == 1) {
        cout << "Computer move: ROCK" << endl;
    } else if (x == 2) {
        cout << "Computer move is: PAPER" << endl;
    } else if (x == 3) {
        cout << "Computer move is: SCISSOR" << endl;
    }
    winner(x, move);
    return 0;
}
