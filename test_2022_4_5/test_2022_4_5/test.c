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
//        //���� 
//        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//        //�ָ���
//        printf("---|---|---\n");
//    }
//}




void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        //���� 
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");//���һ�����ܲ��ô�ӡ�����Լ���һ���ж�����
        }
        printf("\n");
        //�ָ���
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



void player_move(char board[ROW][COL], int row, int col)//�������
{
    printf("�������:>\n");
    int x = 0;
    int y = 0;

    while (1)
    {
        scanf_s("%d %d", &x, &y);//��������
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("�����걻ռ�ã�����������!\n");
            }
        }
        else
        {
            printf("����Ƿ�������������!\n");
        }
    }
}




void computer_move(char board[ROW][COL], int row, int col)//��������
{
    int x = 0;
    int y = 0;
    printf("��������:>\n");
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
    for (i = 0; i < row; i++)//���е��ж�
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//ע�ⲻ�������ո����
        {
            return board[i][1];
        }
    }
    for (i = 0; i < col; i++)//���е��ж�
    {
        if (board[0][i] == board[1][i] && board[2][i] == board[i][2] && board[1][i] != ' ')//ע�ⲻ�������ո����
        {
            return board[1][i];
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//�Խ��ߵ��ж�,���Ͻǵ����½�����
    {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//�Խ��ߵ��жϣ����½ǵ����Ͻ�����
    {
        return board[1][1];
    }
    //�ж�ƽ��(û�пո�)
    if (1 == is_full(board, row, col))
    {
        return 'Q';
    }
    //������Ϸ
    return 'C';


}