#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}



//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < row; i++)
//    {
//        //数据 
//        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//        //分割行
//        printf("---|---|---\n");
//    }
//}




void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        //数据 
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");//最后一个竖杠不用打印，所以加上一个判断条件
        }
        printf("\n");
        //分割行
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
        }
        printf("\n");
    }
}



void player_move(char board[ROW][COL], int row, int col)//玩家下棋
{
    printf("玩家下棋:>\n");
    int x = 0;
    int y = 0;

    while (1)
    {
        scanf_s("%d %d", &x, &y);//输入坐标
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("该坐标被占用，请重新输入!\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入!\n");
        }
    }
}




void computer_move(char board[ROW][COL], int row, int col)//电脑下棋
{
    int x = 0;
    int y = 0;
    printf("电脑下棋:>\n");
    while (1)
    {
        x = rand() % ROW;//0~2
        y = rand() % COL;//0~2
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

int is_full(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char is_win(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)//三行的判断
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//注意不能三个空格相等
        {
            return board[i][1];
        }
    }
    for (i = 0; i < col; i++)//三列的判断
    {
        if (board[0][i] == board[1][i] && board[2][i] == board[i][2] && board[1][i] != ' ')//注意不能三个空格相等
        {
            return board[1][i];
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//对角线的判断,左上角到右下角相连
    {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//对角线的判断，左下角到右上角相连
    {
        return board[1][1];
    }
    //判断平局(没有空格)
    if (1 == is_full(board, row, col))
    {
        return 'Q';
    }
    //继续游戏
    return 'C';


}