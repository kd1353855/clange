#include <stdio.h>
#include <stdbool.h>

#define SIZE 8

char board[SIZE][SIZE];

// �v���C���[��\���񋓌^
typedef enum {
    EMPTY,
    BLACK,
    WHITE
} Player;

// �����z�u
void initialize_board() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            board[i][j] = ' ';
        }
    }
    board[3][3] = board[4][4] = 'O';  // ����
    board[3][4] = board[4][3] = '@';  // ����
}

// �{�[�h��\������
void print_board() {
    printf("  ");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", i);
        for (int j = 0; j < SIZE; ++j) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// ����̈ʒu�ɐ΂�u���邩�ǂ����𔻒肷��
bool can_place(int row, int col, Player player) {
    if (board[row][col] != ' ') return false;  // ���ɐ΂��u����Ă���ꍇ�͒u���Ȃ�

    char opponent = (player == BLACK) ? 'O' : '@';
    bool found = false;

    // 8������T�����đ���̐΂����߂邩�ǂ����𒲂ׂ�
    for (int dr = -1; dr <= 1; ++dr) {
        for (int dc = -1; dc <= 1; ++dc) {
            if (dr == 0 && dc == 0) continue;  // �������g�̈ʒu�͏��O

            int r = row + dr;
            int c = col + dc;
            bool valid = false;

            while (r >= 0 && r < SIZE && c >= 0 && c < SIZE && board[r][c] == opponent) {
                r += dr;
                c += dc;
                valid = true;
            }

            if (valid && r >= 0 && r < SIZE && c >= 0 && c < SIZE && board[r][c] == (player == BLACK ? '@' : 'O')) {
                found = true;
            }
        }
    }

    return found;
}

// �΂�u��
void place_piece(int row, int col, Player player) {
    board[row][col] = (player == BLACK) ? '@' : 'O';

    char opponent = (player == BLACK) ? 'O' : '@';

    // 8������T�����ċ��߂�΂��Ђ�����Ԃ�
    for (int dr = -1; dr <= 1; ++dr) {
        for (int dc = -1; dc <= 1; ++dc) {
            if (dr == 0 && dc == 0) continue;  // �������g�̈ʒu�͏��O

            int r = row + dr;
            int c = col + dc;
            bool valid = false;

            while (r >= 0 && r < SIZE && c >= 0 && c < SIZE && board[r][c] == opponent) {
                r += dr;
                c += dc;
                valid = true;
            }

            if (valid && r >= 0 && r < SIZE && c >= 0 && c < SIZE && board[r][c] == (player == BLACK ? '@' : 'O')) {
                // ���܂ꂽ�΂��Ђ�����Ԃ�
                r = row + dr;
                c = col + dc;
                while (board[r][c] == opponent) {
                    board[r][c] = (player == BLACK) ? '@' : 'O';
                    r += dr;
                    c += dc;
                }
            }
        }
    }
}

// AI�̍s�������肷��
void ai_move(Player player) {
    int best_row = -1, best_col = -1;
    int max_flips = -1;

    char opponent = (player == BLACK) ? 'O' : '@';

    // �S�Ă̋󂫃}�X�ɂ��āA�΂�u���邩�ǂ����Ƌ��߂�΂̐��𒲂ׂ�
    for (int r = 0; r < SIZE; ++r) {
        for (int c = 0; c < SIZE; ++c) {
            if (board[r][c] == ' ' && can_place(r, c, player)) {
                int flips = 0;

                // 8������T�����ċ��߂�΂̐��𐔂���
                for (int dr = -1; dr <= 1; ++dr) {
                    for (int dc = -1; dc <= 1; ++dc) {
                        if (dr == 0 && dc == 0) continue;

                        int rr = r + dr;
                        int cc = c + dc;
                        bool valid = false;

                        while (rr >= 0 && rr < SIZE && cc >= 0 && cc < SIZE && board[rr][cc] == opponent) {
                            rr += dr;
                            cc += dc;
                            valid = true;
                        }

                        if (valid && rr >= 0 && rr < SIZE && cc >= 0 && cc < SIZE && board[rr][cc] == (player == BLACK ? '@' : 'O')) {
                            // ���߂�΂̐����J�E���g
                            int count = 0;
                            while (board[rr][cc] == opponent) {
                                ++count;
                                rr += dr;
                                cc += dc;
                            }
                            flips += count;
                        }
                    }
                }

                // �ł������̐΂����߂�}�X��I��
                if (flips > max_flips) {
                    max_flips = flips;
                    best_row = r;
                    best_col = c;
                }
            }
        }
    }

    // AI���s�������肵�A�΂�u��
    if (best_row != -1 && best_col != -1) {
        printf("AI moves: %d %d\n", best_row, best_col);
        place_piece(best_row, best_col, player);
    }
}

// �Q�[���̃��C�����[�v
void game_loop() {
    Player current_player = BLACK;
    bool valid_move = false;
    int row, col;

    do {
        print_board();

        valid_move = false;
        if (current_player == BLACK) {
            do {
                printf("Your move (row col): ");
                scanf("%d %d", &row, &col);

                if (row >= 0 && row < SIZE && col >= 0 && col < SIZE) {
                    if (can_place(row, col, current_player)) {
                        valid_move = true;
                    }
                    else {
                        printf("Invalid move! Try again.\n");
                    }
                }
                else {
                    printf("Invalid input! Try again.\n");
                }
            } while (!valid_move);

            place_piece(row, col, current_player);
        }
        else {
            // AI�̍s��
            ai_move(current_player);
        }

        // �v���C���[����シ��
        current_player = (current_player == BLACK) ? WHITE : BLACK;

    } while (true);  // �I�������͍���ȗ�
}

int main() {
    initialize_board();
    game_loop();

    return 0;
}