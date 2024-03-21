#include <iostream>
using namespace std;

char checkWinner(char board[3][3])
{
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];

    return ' ';
}

int main() {
    char board[3][3];
    int x, y, k, i;

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            board[x][y] = ' ';
        }
    }

    for (k = 0; k < 9; k++) {
        bool validInput = false;

        while (!validInput) {
            cout << "(x, y) ��ǥ : ";
            cin >> x >> y;

            if (board[x][y] == ' ') {
                validInput = true;
                board[x][y] = (k % 2 == 0) ? 'X' : 'O';

                char winner = checkWinner(board);
                if (winner != ' ') {
                    cout << winner << "�� �̰���ϴ�!" << endl;
                    return 0;
                }
            }
            else {
                cout << "�̹� �Էµ� ��ġ�Դϴ�. �ٸ� ��ġ�� �����ϼ���." << endl;
            }
        }

        for (i = 0; i < 3; i++) {
            cout << "---|---|---" << endl;
            cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
        }
        cout << "---|---|---" << endl;
    }

    cout << "���º��Դϴ�!" << endl;

    return 0;
}