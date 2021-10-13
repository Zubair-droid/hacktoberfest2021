#include<stdio.h>

//Recursive function for Tower Of Hanoi
void TOH(int n, char f_rod, char a_rod, char t_rod)
{
    if(n == 1) {
        printf("Move 1 from %c to %c", f_rod, t_rod);
        printf("\n");
        return;
    }
    TOH(n-1, f_rod, t_rod, a_rod);
    printf("Move %d from %c to %c", n, f_rod, t_rod);
    printf("\n");
    TOH(n-1, a_rod, f_rod, t_rod);

}
void main(){

    int n=0;
    printf("Enter the number of discs : ");
    scanf("%d", &n);
    char i = 'A', m = 'B', f = 'C';
    TOH(n, i, m, f);
}
