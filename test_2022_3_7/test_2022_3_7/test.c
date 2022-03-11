#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
    char arr[5];
    char (*pa)[5] = &arr;

    int* parr[6];
    int* (*pp)[6] = &parr;

    return 0;
}



int main()
{
    int arr[10];
    int i = 0;
    arr[i] == *(arr+i) == p[i] == *(p+i);
    int* p = arr;
    *(p + i);
    
    return 0;
}