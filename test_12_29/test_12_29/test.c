#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct complex
{
    double r, i;
    complex() { r = 0, i = 0; }
    complex(double r1, double i1) : r(r1), i(i1) {}
};
void swap(complax* a, complax* b)
{

}
int main()
{
    complex a1(1, 2), a2(4, 6);
    swap(a1, a2)
        return 0
}
