#include <iostream>
#include <ctime>
#include <conio.h>

class ArrayClass
{
public:
    static constexpr int row = 2, col = 5;
    int status[5]{ 0 };
    int dice1 = rand() % 6 + 1, dice2 = rand() % 6 + 1, dice3 = rand() % 6 + 1, dice4 = rand() % 6 + 1, dice5 = rand() % 6 + 1;

    int diceBoard[row][col]
    {
        {dice1, dice2, dice3, dice4, dice5},
        {this->status[0], this->status[1], this->status[2],this->status[3], this->status[4]}
    };

public:
    void arraySolution()
    {
        printBoard();
        holdChoice();
    }

    void printBoard()
    {

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                std::cout << "|" << diceBoard[i][j] << "|";
            }
            std::cout << "\n";
        }
    }
    
    void holdChoice()
    {
        std::cout << "Please type the number of the dice you would like to reroll.\n";
        for (int i = 0; i < col; i++)
        {
            switch (_getch())
            {
            case '1':
                status[0] = 0;
                break;
            case '2':
                status[1] = 1;
                break;
            case '3':
                status[2] = 1;
                break;
            case '4':
                status[3] = 1;
                break;
            case '5':
                status[4] = 1;
            }
            system("cls");
            printBoard();
        }

        for (int i = 1; i < col; i++)
        {
            
            

            
        }
    }
};

int main()
{
    srand(std::time(nullptr));

    ArrayClass a;
    a.arraySolution();
}

