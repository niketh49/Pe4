#include<iostream>
using namespace std;

struct Player {
    std::string name;
    int marker;
};

class Board {

    public:
        Board();
        void DisplayBoard();
        void GetPlayerChoice();
        void PlaceMarker(int marker);

    private:
        int board_[3][3];
        int x_, y_;
};

Board::Board(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board_[i][j] = 0;
        }
    }
}

void Board::DisplayBoard(){
    std::cout << board_[0][0] << "|" << board_[0][1] << "|" << board_[0][2] <<'\n';
    std::cout << board_[1][0] << "|" << board_[1][1] << "|" << board_[1][2] <<'\n';
    std::cout << board_[2][0] << "|" << board_[2][1] << "|" << board_[2][2] <<'\n';
}

int main() {
    Board *b = new Board();
    Player p1;
    p1.name = "Player 1";
    p1.marker = 1;

    Player p2;
    p2.name = "Player 2";
    p2.marker = 2;

    b->DisplayBoard();
}
