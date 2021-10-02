//monkeys on tree (15 min qn.)
// n -> no. of monkeys
// b -> no. of bananas a monkey can eat
// p -> no. of peanuts a monkey can eat
// m -> no. of bananas available
// j -> no. of peanuts available 
#include<stdio.h>

int main(){
    int n, b, p, m, j;
    float banana_ate = 0.0, peanut_ate = 0.0;
    scanf("%d %d %d %d %d &n, &k, &j, &m, &p");
    if(n<0 || b<0 || p<0 || m<0 || j<0 ){
        printf("Invalid Input");
    }
    else {
        if(b > 0){
            banana_ate = (float)m/b;
        }
        if(p > 0){
            peanut_ate = (float)j/p;
        }
        n = banana_ate - peanut_ate;
    }
    printf("No of monkeys on the tree: %d", n);
    
    return 0;
}

