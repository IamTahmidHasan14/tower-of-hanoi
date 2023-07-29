#include<stdio.h>
int n;
char A, B, C;
void Hanoi(n, A, B, C)
{
    if(n==1){
        printf("Move %c-->%c\n",A,C);
        return;
    }
    Hanoi(n-1,A,C,B);
    printf("Move %c-->%c\n",A,C);
    Hanoi(n-1,B,A,C);
    return;
}
int main()
{
    int n;
    printf("Enter how many disk do you want: ");
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
}
