#include <iostream>
#include <ctime>
#include <conio.h>

class ArrayClass
{
public:
    static const int row = 2, col = 5;
    int status1 = 0, status2 = 0, status3 = 0, status4 = 0, status5 = 0;
    int dice1 = rand() % 6 + 1, dice2 = rand() % 6 + 1, dice3 = rand() % 6 + 1, dice4 = rand() % 6 + 1, dice5 = rand() % 6 + 1;

    int diceBoard[row][col]
    {
        {dice1, dice2, dice3, dice4, dice5},
        {status1, status2, status3, status4, status5}
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
                 = 1;
                break;
            case '2':
                status2 = 1;
                break;
            case '3':
                status3 = 1;
                break;
            case '4':
                status4 = 1;
                break;
            case '5':
                status5 = 1;
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

