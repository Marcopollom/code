#include <iostream>

using namespace std;

char Board[10] = {'D','1','2','3','4','5','6','7','8','9'};

// D is for Dummy so I have an easier time printing the board :)

int checkwin();
void print_board();

int main(){
    int player = 1,i,choice;

    char mark;
    do{
        print_board();
        player = (player % 2) ? 1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && Board[1] == '1')

            Board[1] = mark;
        else if (choice == 2 && Board[2] == '2')

            Board[2] = mark;
        else if (choice == 3 && Board[3] == '3')

            Board[3] = mark;
        else if (choice == 4 && Board[4] == '4')

            Board[4] = mark;
        else if (choice == 5 && Board[5] == '5')

            Board[5] = mark;
        else if (choice == 6 && Board[6] == '6')

            Board[6] = mark;
        else if (choice == 7 && Board[7] == '7')

            Board[7] = mark;
        else if (choice == 8 && Board[8] == '8')

            Board[8] = mark;
        else if (choice == 9 && Board[9] == '9')

            Board[9] = mark;
        else{
            cout<<"Invalid move entered";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    print_board();
    if(i==1)
        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

int checkwin()
{
    if (Board[1] == Board[2] && Board[2] == Board[3])

        return 1;
    else if (Board[4] == Board[5] && Board[5] == Board[6])

        return 1;
    else if (Board[7] == Board[8] && Board[8] == Board[9])

        return 1;
    else if (Board[1] == Board[4] && Board[4] == Board[7])

        return 1;
    else if (Board[2] == Board[5] && Board[5] == Board[8])

        return 1;
    else if (Board[3] == Board[6] && Board[6] == Board[9])

        return 1;
    else if (Board[1] == Board[5] && Board[5] == Board[9])

        return 1;
    else if (Board[3] == Board[5] && Board[5] == Board[7])

        return 1;
    else if (Board[1] != '1' && Board[2] != '2' && Board[3] != '3' && Board[4] != '4' && Board[5] != '5' && Board[6] != '6'&& Board[7] != '7' && Board[8] != '8' && Board[9] != '9')

        return 0;
    else
        return -1;
}


void print_board()
{
    system("clear");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << Board[1] << "  |  " << Board[2] << "  |  " << Board[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << Board[4] << "  |  " << Board[5] << "  |  " << Board[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << Board[7] << "  |  " << Board[8] << "  |  " << Board[9] << endl;

    cout << "     |     |     " << endl << endl;
}

